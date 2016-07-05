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

#define DEV_NAME "rtl8192du"
#define USB_VENDER_ID_REALTEK 0x0bda

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
    {RTL_USB_DEVICE(USB_VENDER_ID_REALTEK, 0x8193, rtl92du_hal_cfg)},/* 8192DU-VC */
    {RTL_USB_DEVICE(USB_VENDER_ID_REALTEK, 0x8194, rtl92du_hal_cfg)},/* 8192DU-VS */
    {RTL_USB_DEVICE(USB_VENDER_ID_REALTEK, 0x8111, rtl92du_hal_cfg)},/* Realtek 5G dongle for WiFi Display */
    {RTL_USB_DEVICE(USB_VENDER_ID_REALTEK, 0x0193, rtl92du_hal_cfg)},/* 8192DE-VAU */
    {RTL_USB_DEVICE(USB_VENDER_ID_REALTEK, 0x8171, rtl92du_hal_cfg)},/* 8192DU-VC */

	/*=== Customer ID ===*/
	/****** 8192DU-VC ********/
    {RTL_USB_DEVICE(0x2019, 0xAB2C, rtl92du_hal_cfg)},/* PCI - Abocm */
    {RTL_USB_DEVICE(0x2019, 0x4903, rtl92du_hal_cfg)},/* PCI - ETOP */
    {RTL_USB_DEVICE(0x2019, 0x4904, rtl92du_hal_cfg)},/* PCI - ETOP */
    {RTL_USB_DEVICE(0x07B8, 0x8193, rtl92du_hal_cfg)},/* Abocom - Abocom */

    /****** 8192DU-VS ********/
    {RTL_USB_DEVICE(0x20F4, 0x664B, rtl92du_hal_cfg)}, /* TRENDnet - Cameo */
    {RTL_USB_DEVICE(0x04DD, 0x954F, rtl92du_hal_cfg)},  /* Sharp */
    {RTL_USB_DEVICE(0x04DD, 0x96A6, rtl92du_hal_cfg)},  /* Sharp */
    {RTL_USB_DEVICE(0x050D, 0x110A, rtl92du_hal_cfg)}, /* Belkin - Edimax */
    {RTL_USB_DEVICE(0x050D, 0x1105, rtl92du_hal_cfg)}, /* Belkin - Edimax */
    {RTL_USB_DEVICE(0x050D, 0x120A, rtl92du_hal_cfg)}, /* Belkin - Edimax */
    {RTL_USB_DEVICE(0x1668, 0x8102, rtl92du_hal_cfg)}, /*  -  */
    {RTL_USB_DEVICE(0x0BDA, 0xE194, rtl92du_hal_cfg)}, /*  - Edimax */

    /****** 8192DU-WiFi Display Dongle ********/
    {RTL_USB_DEVICE(0x2019, 0xAB2D, rtl92du_hal_cfg)},/* Planex - Abocom ,5G dongle for WiFi Display */
};

static int rtl8192du_probe(struct usb_interface *intf,
                           const struct usb_device_id *id){
    return rtl_usb_probe(intf, id, &rtl92du_hal_cfg);
}

static struct usb_driver rtl8192du_driver = {
    .name = DEV_NAME,
    .probe = rtl8192du_probe,
    .disconnect = rtl_usb_disconnect,
    .id_table = rtl8192d_usb_ids,

    .disable_hub_initiated_lpm = 1,
}
