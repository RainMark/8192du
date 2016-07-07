static int _out_ep_mapping(struct ieee80211_hw *hw)
{
	int err = 0;
	bool bIsChipN, bwificfg = false;
	struct rtl_hal *rtlhal = rtl_hal(rtl_priv(hw));
	struct rtl_usb_priv *usb_priv = rtl_usbpriv(hw);
	struct rtl_usb *rtlusb = rtl_usbdev(usb_priv);
	struct rtl_ep_map *ep_map = &(rtlusb->ep_map);

	bIsChipN = IS_NORMAL_CHIP(rtlhal->version);
	switch (rtlusb->out_ep_nums) {
	case 2:
		_TwoOutEpMapping(hw, bIsChipN, bwificfg, ep_map);
		break;
	case 3:
		/* Test chip doesn't support three out EPs. */
		if (!bIsChipN) {
			err  =  -EINVAL;
			goto err_out;
		}
		_ThreeOutEpMapping(hw, bIsChipN, ep_map);
		break;
	case 1:
		_OneOutEpMapping(hw, ep_map);
		break;
	default:
		err  =  -EINVAL;
		break;
	}
err_out:
	return err;

}
/* endpoint mapping */
int  rtl8192cu_endpoint_mapping(struct ieee80211_hw *hw)
{
	struct rtl_hal *rtlhal = rtl_hal(rtl_priv(hw));
	int error = 0;
	if (likely(IS_NORMAL_CHIP(rtlhal->version)))
		error = _ConfigVerNOutEP(hw);
	else
		error = _ConfigVerTOutEP(hw);
	if (error)
		goto err_out;
	error = _out_ep_mapping(hw);
	if (error)
		goto err_out;
err_out:
	return error;
}

u16 rtl8192cu_mq_to_hwq(__le16 fc, u16 mac80211_queue_index)
{
	u16 hw_queue_index;

	if (unlikely(ieee80211_is_beacon(fc))) {
		hw_queue_index = RTL_TXQ_BCN;
		goto out;
	}
	if (ieee80211_is_mgmt(fc)) {
		hw_queue_index = RTL_TXQ_MGT;
		goto out;
	}
	switch (mac80211_queue_index) {
	case 0:
		hw_queue_index = RTL_TXQ_VO;
		break;
	case 1:
		hw_queue_index = RTL_TXQ_VI;
		break;
	case 2:
		hw_queue_index = RTL_TXQ_BE;
		break;
	case 3:
		hw_queue_index = RTL_TXQ_BK;
		break;
	default:
		hw_queue_index = RTL_TXQ_BE;
		RT_ASSERT(false, "QSLT_BE queue, skb_queue:%d\n",
			  mac80211_queue_index);
		break;
	}
out:
	return hw_queue_index;
}
