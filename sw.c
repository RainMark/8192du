#include "../wifi.h"
#include "../core.h"
#include "../usb.h"
#include "../efuse.h"
#include "../base.h"
#include "reg.h"
#include "def.h"
#include "phy.h"
#include "mac.h"
#include "dm.h"
#include "rf.h"
#include "sw.h"
#include "trx.h"
#include "led.h"
#include "hw.h"
#include <linux/module.h>

MODULE_AUTHOR("Georgia		<georgia@realtek.com>");
MODULE_AUTHOR("Ziv Huang	<ziv_huang@realtek.com>");
MODULE_AUTHOR("Larry Finger	<Larry.Finger@lwfinger.net>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Realtek 8192D 802.11n USB wireless");
MODULE_FIRMWARE("rtlwifi/rtl8192dufw.bin");
MODULE_FIRMWARE("rtlwifi/rtl8192dufw_wol.bin");

#define DEV_NAME "rtl8192du"
#define USB_VENDER_ID_REALTEK 0x0bda

static int rtl92du_init_sw_vars(struct ieee80211_hw *hw)
{
	struct rtl_priv *rtlpriv = rtl_priv(hw);
	int err;

	rtlpriv->dm.dm_initialgain_enable = true;
	rtlpriv->dm.dm_flag = 0;
	rtlpriv->dm.disable_framebursting = false;
	rtlpriv->dm.thermalvalue = 0;
	rtlpriv->dbg.global_debuglevel = rtlpriv->cfg->mod_params->debug;

	/* for firmware buf */
	rtlpriv->rtlhal.pfirmware = vzalloc(0x4000);
	if (!rtlpriv->rtlhal.pfirmware) {
		RT_TRACE(rtlpriv, COMP_ERR, DBG_EMERG,
			"Can't alloc buffer for fw\n");
		return 1;
	}
#ifdef CONFIG_WOWLAN
	rtlpriv->cfg->fw_name = "rtlwifi/rtl8192dufw_wol.bin";
#else
	rtlpriv->cfg->fw_name = "rtlwifi/rtl8192dufw.bin";
#endif /* CONFIG_WOWLAN */

	rtlpriv->max_fw_size = 0x4000;
	err = request_firmware_nowait(THIS_MODULE, 1,
		rtlpriv->cfg->fw_name, rtlpriv->io.dev,
		GFP_KERNEL, hw, rtl_fw_cb);
	return err;
}

static void rtl92du_deinit_sw_vars(struct ieee80211_hw *hw)
{
	struct rtl_priv *rtlpriv = rtl_priv(hw);

	if (rtlpriv->rtlhal.pfirmware) {
		vfree(rtlpriv->rtlhal.pfirmware);
		rtlpriv->rtlhal.pfirmware = NULL;
	}
}

static struct rtl_hal_ops rtl8192du_hal_ops = {
	.init_sw_vars = rtl92du_init_sw_vars,
	.deinit_sw_vars = rtl92du_deinit_sw_vars,
	.read_chip_version = rtl92d_read_chip_version,
	.read_eeprom_info = rtl92du_read_eeprom_info,
	.enable_interrupt = rtl92d_enable_interrupt,
	.disable_interrupt = rtl92d_disable_interrupt,
	.hw_init = rtl92du_hw_init,
	.hw_disable = rtl92du_card_disable,
	.set_network_type = rtl92du_set_network_type,
	.set_chk_bssid = rtl92du_set_check_bssid,
	.set_qos = rtl92d_set_qos,
	.set_bcn_reg = rtl92du_set_beacon_related_registers,
	.set_bcn_intv = rtl92du_set_beacon_interval,
	.update_interrupt_mask = rtl92du_update_interrupt_mask,
	.get_hw_reg = rtl92du_get_hw_reg,
	.set_hw_reg = rtl92du_set_hw_reg,
	.update_rate_tbl = rtl92du_update_hal_rate_tbl,
	.fill_tx_desc = rtl92du_tx_fill_desc,
	.fill_fake_txdesc = rtl92du_fill_fake_txdesc,
	.fill_tx_cmddesc = rtl92du_tx_fill_cmddesc,
	.cmd_send_packet = rtl92du_cmd_send_packet,
	.query_rx_desc = rtl92du_rx_query_desc,
	.set_channel_access = rtl92du_update_channel_access_setting,
	.radio_onoff_checking = rtl92du_gpio_radio_on_off_checking,
	.set_bw_mode = rtl92d_phy_set_bw_mode,
	.switch_channel = rtl92d_phy_sw_chnl,
	.dm_watchdog = rtl92d_dm_watchdog,
	.scan_operation_backup = rtl_phy_scan_operation_backup,
	.set_rf_power_state = rtl92du_phy_set_rf_power_state,
	.led_control = rtl92du_led_control,
	.enable_hw_sec = rtl92du_enable_hw_security_config,
	.set_key = rtl92d_set_key,
	.init_sw_leds = rtl92du_init_sw_leds,
	.deinit_sw_leds = rtl92du_deinit_sw_leds,
	.get_bbreg = rtl92d_phy_query_bb_reg,
	.set_bbreg = rtl92d_phy_set_bb_reg,
	.get_rfreg = rtl92du_phy_query_rf_reg,
	.set_rfreg = rtl92du_phy_set_rf_reg,
	.phy_rf6052_config = rtl92du_phy_rf6052_config,
	.phy_rf6052_set_cck_txpower = rtl92du_phy_rf6052_set_cck_txpower,
	.phy_rf6052_set_ofdm_txpower = rtl92du_phy_rf6052_set_ofdm_txpower,
	.config_bb_with_headerfile = _rtl92du_phy_config_bb_with_headerfile,
	.config_bb_with_pgheaderfile = _rtl92du_phy_config_bb_with_pgheaderfile,
	.phy_lc_calibrate = _rtl92du_phy_lc_calibrate,
	.phy_set_bw_mode_callback = rtl92du_phy_set_bw_mode_callback,
	.dm_dynamic_txpower = rtl92du_dm_dynamic_txpower,
	.fill_h2c_cmd = rtl92d_fill_h2c_cmd,
};

static struct rtl_mod_params rtl92du_mod_params = {
	.sw_crypto = 0,
	.debug = DBG_EMERG,
};

module_param_named(swenc, rtl92du_mod_params.sw_crypto, bool, 0444);
module_param_named(debug, rtl92du_mod_params.debug, int, 0444);
MODULE_PARM_DESC(swenc, "Set to 1 for software crypto (default 0)\n");
MODULE_PARM_DESC(debug, "Set debug level (0-5) (default 0)");

static struct rtl_hal_usbint_cfg rtl92du_interface_cfg = {
	/* rx */
	.in_ep_num = RTL92D_USB_BULK_IN_NUM,
	.rx_urb_num = RTL92D_NUM_RX_URBS,
	.rx_max_size = RTL92D_SIZE_MAX_RX_BUFFER,
	.usb_rx_hdl = rtl8192du_rx_hdl,
	.usb_rx_segregate_hdl = NULL, /* rtl8192d_rx_segregate_hdl; */
								  /* tx */
	.usb_tx_cleanup = rtl8192d_tx_cleanup,
	.usb_tx_post_hdl = rtl8192d_tx_post_hdl,
	.usb_tx_aggregate_hdl = rtl8192d_tx_aggregate_hdl,
	/* endpoint mapping */
	.usb_endpoint_mapping = rtl8192du_endpoint_mapping,
	.usb_mq_to_hwq = rtl8192du_mq_to_hwq,
};

static struct rtl_hal_cfg rtl92du_hal_cfg = {
	.name = "rtl8192du",
	.fw_name = "rtlwifi/rtl8192dufw.bin",
	.ops = &rtl8192du_hal_ops,
	.mod_params = &rtl92du_mod_params,
	.usb_interface_cfg = &rtl92du_interface_cfg,

	.maps[SYS_ISO_CTRL] = REG_SYS_ISO_CTRL,
	.maps[SYS_FUNC_EN] = REG_SYS_FUNC_EN,
	.maps[SYS_CLK] = REG_SYS_CLKR,
	.maps[MAC_RCR_AM] = RCR_AM,
	.maps[MAC_RCR_AB] = RCR_AB,
	.maps[MAC_RCR_ACRC32] = RCR_ACRC32,
	.maps[MAC_RCR_ACF] = RCR_ACF,
	.maps[MAC_RCR_AAP] = RCR_AAP,

	.maps[EFUSE_TEST] = REG_EFUSE_TEST,
	.maps[EFUSE_CTRL] = REG_EFUSE_CTRL,
	.maps[EFUSE_CLK] = 0,	/* just for 92se */
	.maps[EFUSE_CLK_CTRL] = REG_EFUSE_CTRL,
	.maps[EFUSE_PWC_EV12V] = PWC_EV12V,
	.maps[EFUSE_FEN_ELDR] = FEN_ELDR,
	.maps[EFUSE_LOADER_CLK_EN] = LOADER_CLK_EN,
	.maps[EFUSE_ANA8M] = 0,	/* just for 92se */
	.maps[EFUSE_HWSET_MAX_SIZE] = HWSET_MAX_SIZE,
	.maps[EFUSE_MAX_SECTION_MAP] = EFUSE_MAX_SECTION,
	.maps[EFUSE_REAL_CONTENT_SIZE] = EFUSE_REAL_CONTENT_LEN,

	.maps[RWCAM] = REG_CAMCMD,
	.maps[WCAMI] = REG_CAMWRITE,
	.maps[RCAMO] = REG_CAMREAD,
	.maps[CAMDBG] = REG_CAMDBG,
	.maps[SECR] = REG_SECCFG,
	.maps[SEC_CAM_NONE] = CAM_NONE,
	.maps[SEC_CAM_WEP40] = CAM_WEP40,
	.maps[SEC_CAM_TKIP] = CAM_TKIP,
	.maps[SEC_CAM_AES] = CAM_AES,
	.maps[SEC_CAM_WEP104] = CAM_WEP104,

	.maps[RTL_IMR_BCNDMAINT6] = IMR_BCNDMAINT6,
	.maps[RTL_IMR_BCNDMAINT5] = IMR_BCNDMAINT5,
	.maps[RTL_IMR_BCNDMAINT4] = IMR_BCNDMAINT4,
	.maps[RTL_IMR_BCNDMAINT3] = IMR_BCNDMAINT3,
	.maps[RTL_IMR_BCNDMAINT2] = IMR_BCNDMAINT2,
	.maps[RTL_IMR_BCNDMAINT1] = IMR_BCNDMAINT1,
	.maps[RTL_IMR_BCNDOK8] = IMR_BCNDOK8,
	.maps[RTL_IMR_BCNDOK7] = IMR_BCNDOK7,
	.maps[RTL_IMR_BCNDOK6] = IMR_BCNDOK6,
	.maps[RTL_IMR_BCNDOK5] = IMR_BCNDOK5,
	.maps[RTL_IMR_BCNDOK4] = IMR_BCNDOK4,
	.maps[RTL_IMR_BCNDOK3] = IMR_BCNDOK3,
	.maps[RTL_IMR_BCNDOK2] = IMR_BCNDOK2,
	.maps[RTL_IMR_BCNDOK1] = IMR_BCNDOK1,
	.maps[RTL_IMR_TIMEOUT2] = IMR_TIMEOUT2,
	.maps[RTL_IMR_TIMEOUT1] = IMR_TIMEOUT1,

	.maps[RTL_IMR_TXFOVW] = IMR_TXFOVW,
	.maps[RTL_IMR_PSTIMEOUT] = IMR_PSTIMEOUT,
	.maps[RTL_IMR_BCNINT] = IMR_BCNINT,
	.maps[RTL_IMR_RXFOVW] = IMR_RXFOVW,
	.maps[RTL_IMR_RDU] = IMR_RDU,
	.maps[RTL_IMR_ATIMEND] = IMR_ATIMEND,
	.maps[RTL_IMR_BDOK] = IMR_BDOK,
	.maps[RTL_IMR_MGNTDOK] = IMR_MGNTDOK,
	.maps[RTL_IMR_TBDER] = IMR_TBDER,
	.maps[RTL_IMR_HIGHDOK] = IMR_HIGHDOK,
	.maps[RTL_IMR_TBDOK] = IMR_TBDOK,
	.maps[RTL_IMR_BKDOK] = IMR_BKDOK,
	.maps[RTL_IMR_BEDOK] = IMR_BEDOK,
	.maps[RTL_IMR_VIDOK] = IMR_VIDOK,
	.maps[RTL_IMR_VODOK] = IMR_VODOK,
	.maps[RTL_IMR_ROK] = IMR_ROK,
	.maps[RTL_IBSS_INT_MASKS] = (IMR_BCNINT | IMR_TBDOK | IMR_TBDER),

	.maps[RTL_RC_CCK_RATE1M] = DESC92_RATE1M,
	.maps[RTL_RC_CCK_RATE2M] = DESC92_RATE2M,
	.maps[RTL_RC_CCK_RATE5_5M] = DESC92_RATE5_5M,
	.maps[RTL_RC_CCK_RATE11M] = DESC92_RATE11M,
	.maps[RTL_RC_OFDM_RATE6M] = DESC92_RATE6M,
	.maps[RTL_RC_OFDM_RATE9M] = DESC92_RATE9M,
	.maps[RTL_RC_OFDM_RATE12M] = DESC92_RATE12M,
	.maps[RTL_RC_OFDM_RATE18M] = DESC92_RATE18M,
	.maps[RTL_RC_OFDM_RATE24M] = DESC92_RATE24M,
	.maps[RTL_RC_OFDM_RATE36M] = DESC92_RATE36M,
	.maps[RTL_RC_OFDM_RATE48M] = DESC92_RATE48M,
	.maps[RTL_RC_OFDM_RATE54M] = DESC92_RATE54M,

	.maps[RTL_RC_HT_RATEMCS7] = DESC92_RATEMCS7,
	.maps[RTL_RC_HT_RATEMCS15] = DESC92_RATEMCS15,
};

static struct usb_device_id rtl8192d_usb_ids[] = {

	/*=== Realtek demoboard ===*/
	/****** 8192DU ********/
	{ RTL_USB_DEVICE(USB_VENDER_ID_REALTEK, 0x8193, rtl92du_hal_cfg) },/* 8192DU-VC */
	{ RTL_USB_DEVICE(USB_VENDER_ID_REALTEK, 0x8194, rtl92du_hal_cfg) },/* 8192DU-VS */
	{ RTL_USB_DEVICE(USB_VENDER_ID_REALTEK, 0x8111, rtl92du_hal_cfg) },/* Realtek 5G dongle for WiFi Display */
	{ RTL_USB_DEVICE(USB_VENDER_ID_REALTEK, 0x0193, rtl92du_hal_cfg) },/* 8192DE-VAU */
	{ RTL_USB_DEVICE(USB_VENDER_ID_REALTEK, 0x8171, rtl92du_hal_cfg) },/* 8192DU-VC */

																	   /*=== Customer ID ===*/
																	   /****** 8192DU-VC ********/
	{ RTL_USB_DEVICE(0x2019, 0xAB2C, rtl92du_hal_cfg) },/* PCI - Abocm */
	{ RTL_USB_DEVICE(0x2019, 0x4903, rtl92du_hal_cfg) },/* PCI - ETOP */
	{ RTL_USB_DEVICE(0x2019, 0x4904, rtl92du_hal_cfg) },/* PCI - ETOP */
	{ RTL_USB_DEVICE(0x07B8, 0x8193, rtl92du_hal_cfg) },/* Abocom - Abocom */

														/****** 8192DU-VS ********/
	{ RTL_USB_DEVICE(0x20F4, 0x664B, rtl92du_hal_cfg) }, /* TRENDnet - Cameo */
	{ RTL_USB_DEVICE(0x04DD, 0x954F, rtl92du_hal_cfg) },  /* Sharp */
	{ RTL_USB_DEVICE(0x04DD, 0x96A6, rtl92du_hal_cfg) },  /* Sharp */
	{ RTL_USB_DEVICE(0x050D, 0x110A, rtl92du_hal_cfg) }, /* Belkin - Edimax */
	{ RTL_USB_DEVICE(0x050D, 0x1105, rtl92du_hal_cfg) }, /* Belkin - Edimax */
	{ RTL_USB_DEVICE(0x050D, 0x120A, rtl92du_hal_cfg) }, /* Belkin - Edimax */
	{ RTL_USB_DEVICE(0x1668, 0x8102, rtl92du_hal_cfg) }, /*  -  */
	{ RTL_USB_DEVICE(0x0BDA, 0xE194, rtl92du_hal_cfg) }, /*  - Edimax */

														 /****** 8192DU-WiFi Display Dongle ********/
	{ RTL_USB_DEVICE(0x2019, 0xAB2D, rtl92du_hal_cfg) },/* Planex - Abocom ,5G dongle for WiFi Display */
};

static int rtl8192du_probe(struct usb_interface *intf,
	const struct usb_device_id *id) {
	return rtl_usb_probe(intf, id, &rtl92du_hal_cfg);
}

static struct usb_driver rtl8192du_driver = {
	.name = DEV_NAME,
	.probe = rtl8192du_probe,
	.disconnect = rtl_usb_disconnect,
	.id_table = rtl8192d_usb_ids,

	.disable_hub_initiated_lpm = 1,
}
