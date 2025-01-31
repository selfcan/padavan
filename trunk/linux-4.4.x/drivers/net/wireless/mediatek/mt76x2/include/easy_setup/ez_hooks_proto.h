typedef char RTMP_STRING;

unsigned long ez_build_beacon_ie(
	void *wdev_obj,
	unsigned char *frame_buf);


unsigned long ez_build_probe_request_ie(
	void *wdev_obj,
	unsigned char *frame_buf);

unsigned long ez_build_probe_response_ie(
	void *wdev_obj,
	unsigned char *frame_buf);

unsigned long ez_build_auth_request_ie(
	void *wdev_obj,
	unsigned char *peer_addr,
	unsigned char *frame_buf);

unsigned long ez_build_auth_response_ie(
	void *wdev_obj,
	unsigned char *peer_addr,
	unsigned char *frame_buf);

unsigned long ez_build_assoc_request_ie(
	void *ad_obj,
	void *wdev_obj,
	unsigned char *peer_addr,
	unsigned char *frame_buf,
	unsigned int frame_buf_len);

unsigned long ez_build_assoc_response_ie(
	void *wdev_obj,
	unsigned char *peer_addr,
	unsigned char *ap_gtk,
	unsigned int ap_gtk_len,
	unsigned char *frame_buf);


unsigned char ez_process_probe_request(
	void *ad_obj,
	void *wdev_obj,
	unsigned char *peer_addr,
	void *msg,
	unsigned long msg_len);

void ez_process_beacon_probe_response(
	void *wdev_obj,
	void *msg,
	unsigned long msg_len);
unsigned char ez_process_auth_request(
	void *ad_obj,
	void *wdev_obj,
	UCHAR *addr1,
	UCHAR *addr2,
	USHORT auth_alg,
	USHORT auth_seq,
	USHORT auth_status,
	CHAR *Chtxt,
#ifdef DOT11R_FT_SUPPORT
	FT_INFO * FtInfo,
#endif
	void *msg,
	unsigned long msg_len);


void ez_process_auth_response(
	void *ad_obj,
	void *wdev_obj,
	unsigned char *peer_addr,
	unsigned long *current_state,
	void *msg,
	unsigned long msg_len);

unsigned short ez_process_assoc_request(
	void *wdev_obj,
	void *entry_obj,
	unsigned char isReassoc,
	void *msg,
	unsigned long msg_len);


unsigned short ez_process_assoc_response(
	void *wdev_obj,
	unsigned char *peer_addr,
	void *msg,
	unsigned long msg_len);

INT Show_EasySetupInfo_Proc(RTMP_ADAPTER *pAd, RTMP_STRING *arg);




INT Set_EasySetup_Debug_Proc(RTMP_ADAPTER *pAd, RTMP_STRING *arg);


INT Set_EasySetup_RoamTime_Proc(RTMP_ADAPTER *pAd, RTMP_STRING *arg);

INT Set_EasySetup_Delay_Disconnect_Count_Proc(RTMP_ADAPTER *pAd, RTMP_STRING *arg);

INT Set_EasySetup_Wait_For_Info_Transfer_Proc(RTMP_ADAPTER *pAd, RTMP_STRING *arg);

INT Set_EasySetup_WDL_Missing_Time_Proc(RTMP_ADAPTER *pAd, RTMP_STRING *arg);

INT Set_EasySetup_Force_Connect_Bssid_Time_Proc(RTMP_ADAPTER *pAd, RTMP_STRING *arg);

INT Set_EasySetup_Peer_Entry_Age_Out_time_Proc(RTMP_ADAPTER *pAd, RTMP_STRING *arg);

INT Set_EasySetup_Scan_Same_Channel_Time_Proc(RTMP_ADAPTER *pAd, RTMP_STRING *arg);


INT Set_EasySetup_Partial_Scan_Time_Proc(RTMP_ADAPTER *pAd, RTMP_STRING *arg);

INT ez_send_broadcast_deauth_proc(RTMP_ADAPTER *pAd, RTMP_STRING *arg);


INT Set_EasySetup_GroupID_Proc(
	IN	PRTMP_ADAPTER	pAd,
	IN	RTMP_STRING *arg);


INT Set_EasySetup_GenGroupID_Proc(
	IN	PRTMP_ADAPTER	pAd,
	IN	RTMP_STRING *arg);


INT Set_EasySetup_RssiThreshold_Proc(
	IN	PRTMP_ADAPTER	pAd,
	IN	RTMP_STRING *arg);

INT Set_EasySetup_MaxScanDelay(
	IN	PRTMP_ADAPTER	pAd,
	IN	RTMP_STRING *arg);

INT set_EasySetup_Api_Mode(
	IN	PRTMP_ADAPTER	pAd,
	IN	RTMP_STRING *arg);


INT set_EasySetup_MergeGroup_proc(
	IN	PRTMP_ADAPTER	pAd,
	IN	RTMP_STRING *arg);


INT Set_EasySetup_ForceSsid_Proc(
	IN	PRTMP_ADAPTER	pAd,
	IN	RTMP_STRING *arg);


INT Set_EasySetup_ForceBssid_Proc(
	IN  PRTMP_ADAPTER pAd,
	IN  RTMP_STRING *arg);

INT Set_EasySetup_BWPushConfig(RTMP_ADAPTER *pAd, RTMP_STRING *arg);

BOOLEAN ez_is_loop_pkt_rcvd(void *wdev_obj, void *pRxBlk);



INT Set_EasySetup_ssid_psk_proc(RTMP_ADAPTER *pAd, RTMP_STRING *arg);


INT Set_EasySetup_conf_ssid_psk_proc(RTMP_ADAPTER *pAd, RTMP_STRING *arg);


void ez_apcli_link_down(
	void *ad_obj,
	void *apcli_obj,
	unsigned char if_idx);


BOOLEAN ez_update_connection_permission(
	void *ad_obj,
	struct wifi_dev *wdev,
	enum EZ_CONN_ACTION action);


BOOLEAN ez_is_connection_allowed(struct wifi_dev *wdev);

BOOLEAN ez_probe_rsp_join_action(void *ad_obj, void *wdev_obj, struct _vendor_ie_cap *ie_list, unsigned long  Bssidx);

void ez_update_connection(void *ad_obj, void *wdev_obj);


void ez_handle_pairmsg4(void *ad_obj, IN PMAC_TABLE_ENTRY pEntry);



void ez_roam(struct wifi_dev *wdev, BSS_ENTRY *pBssEntry);


ULONG
BssTableSearchWithBssId(
	IN BSS_TABLE	* Tab,
	IN PUCHAR	Bssid);


BSS_ENTRY *ez_find_roam_candidate(void *ad_obj, unsigned char *bssid, struct wifi_dev *wdev);



INT Set_EasySetup_RoamBssid_Proc(
	IN  PRTMP_ADAPTER pAd,
	IN  RTMP_STRING *arg);


void ez_prepare_security_key(
	void *wdev_obj,
	unsigned char *peer_addr,
	unsigned char authenticator);

enum_group_merge_action_t is_group_merge_candidate(void *bss_entry_obj,
	void *temp_bss_entry_obj, struct wifi_dev *wdev);


BOOLEAN ez_is_channel_same(struct wifi_dev *wdev);


void ez_process_action_frame(
	void *ad_obj,
	void *elem_obj);

void ez_read_parms_from_file(
	void *ad_obj,
	char *tmpbuf,
	char *buffer);


int ez_parse_set_command(void *ad_obj, RTMP_IOCTL_INPUT_STRUCT *wrq, IN int cmd);


int ez_parse_query_command(void *ad_obj, RTMP_IOCTL_INPUT_STRUCT *wrq, IN int cmd);


BOOLEAN check_best_ap_rssi_threshold(struct wifi_dev *wdev, BSS_ENTRY *bss_entry);



void ez_vendor_ie_parse(struct _vendor_ie_cap *vendor_ie, PEID_STRUCT info_elem);

void ez_set_ap_fallback_context(struct wifi_dev *wdev, BOOLEAN fallback, unsigned char fallback_channel);

void *ez_peer_table_search_by_addr(
	struct wifi_dev *wdev,
	unsigned char *addr);

void ez_set_delete_peer_in_differed_context(struct wifi_dev *wdev, void *ez_peer, BOOLEAN set);

BOOLEAN ez_probe_count_handle(PAPCLI_STRUCT pApCliEntry);

BOOLEAN ez_ApCliAutoConnectBWAdjust(
	IN void	*ad_obj,
	IN struct wifi_dev	*wdev,
	IN void		*bss_entry_obj);

void *ez_get_otherband_ad(void *wdev_obj);

unsigned short ez_check_for_ez_enable(
	struct wifi_dev *wdev,
	void *msg,
	unsigned long msg_len
	);


void ez_peer_table_delete(
	void *wdev_obj,
	unsigned char *addr);

BOOLEAN ez_is_roam_blocked_mac(struct wifi_dev *wdev, UCHAR *mac_addr);


BOOLEAN ez_ap_scan_timeout_action(struct wifi_dev *wdev);


void ez_peer_table_maintenance(PRTMP_ADAPTER ad);


BOOLEAN ez_port_secured(
	void *ad_obj,
	void *entry_obj,
	unsigned char if_idx,
	unsigned char ap_mode);


void increment_best_ap_rssi_threshold(struct wifi_dev *wdev);



void ez_ap_peer_beacon_action(struct wifi_dev *ez_wdev,
	unsigned char *mac_addr, int capability, CHAR *RealRssi,
	struct _vendor_ie_cap *ie_list, UCHAR Channel,
	UCHAR *Ssid, UCHAR SsidLen, UCHAR *Bssid);


BOOLEAN ez_ap_scan_complete_handle(struct wifi_dev *wdev);


void ez_start(
	void *wdev_obj,
	unsigned char ap_mode);


void ez_exit(
	void *wdev_obj);
void ez_init(
	void *ad_obj,
	void *wdev_obj,
	unsigned char ap_mode);

void ez_stop(
	void *wdev_obj);


void ez_update_ap_cap(struct wifi_dev *wdev, BOOLEAN set, unsigned int capability);


BOOLEAN ez_apcli_search_best_ap(
	void *ad_obj,
	void *apcli_entry_obj,
	unsigned char inf_idx);

void ez_restore_channel_config(struct wifi_dev *wdev);


unsigned char ez_get_delay_disconnect_count(struct wifi_dev *wdev);


void ez_set_delay_disconnect_count(struct wifi_dev *wdev, unsigned char count);


void ez_acquire_lock(PRTMP_ADAPTER pAd, struct wifi_dev *wdev, unsigned char lock_id);

void ez_release_lock(PRTMP_ADAPTER pAd, struct wifi_dev *wdev, unsigned char lock_id);


BOOLEAN ez_is_weight_same(struct wifi_dev *wdev, UCHAR *weight);


BOOLEAN ez_is_other_band_mlme_running(struct wifi_dev *wdev);


BOOLEAN ez_handle_scan_channel_restore(struct wifi_dev *wdev);


void ez_triband_insert_tlv(PRTMP_ADAPTER pAd, unsigned int tag_ID, UCHAR *buffer, ULONG *tag_len);

void ez_handle_peer_disconnection(struct wifi_dev *wdev, unsigned char *mac_addr);

BOOLEAN ez_need_drop_tx_multicast_packet(struct wifi_dev *wdev);

BOOLEAN ez_sta_rx_pkt_handle(struct wifi_dev *wdev, UCHAR *pPayload, UINT MPDUtotalByteCnt);



BOOLEAN ez_apcli_rx_grp_pkt_drop(
	IN struct wifi_dev *wdev,
	IN struct sk_buff *pSkb);

BOOLEAN ez_apcli_tx_grp_pkt_drop(struct wifi_dev *wdev, struct sk_buff *pSkb);


void ez_apcli_uni_tx_on_dup_link(struct wifi_dev *wdev, struct sk_buff *pSkb);

void ez_send_delay_disconnect_for_pbc(struct wifi_dev *wdev);
int ez_handle_send_packets(struct wifi_dev *wdev, PNDIS_PACKET pPacket);

BOOLEAN EzMlmeEnqueue(
	IN PRTMP_ADAPTER pAd,
	IN ULONG Machine,
	IN ULONG MsgType,
	IN ULONG MsgLen,
	IN VOID * Msg,
	IN ULONG Priv);

	BOOLEAN ez_ap_tx_grp_pkt_drop_to_ez_apcli(
		IN struct wifi_dev *wdev,
		IN struct sk_buff *pSkb);

BOOLEAN ez_need_bypass_rx_fwd(struct wifi_dev *wdev);
VOID ez_APMlmeBroadcastDeauthReqAction(
		IN PRTMP_ADAPTER pAd,
		IN PMLME_QUEUE_ELEM Elem);

VOID	RTMPCommSiteSurveyData(
	IN	PSTRING msg,
	IN	BSS_ENTRY *pBss,
	IN	UINT32 MsgLen);

void ez_update_bss_entry(OUT BSS_ENTRY *pBss, struct _vendor_ie_cap *ie_list);
INT Set_ApCli_Hide_Ssid_Proc(RTMP_ADAPTER *pAd, RTMP_STRING *arg);
INT Set_EasySetup_Open_GenGroupID_Proc(
	IN	PRTMP_ADAPTER pAd,
	IN	RTMP_STRING *arg);
INT Set_ez_connection_allow_all(
	IN	PRTMP_ADAPTER pAd,
	IN	RTMP_STRING *arg);
INT Set_EasySetup_Best_Ap_RSSI_Threshold(RTMP_ADAPTER *pAd, RTMP_STRING *arg);
VOID RTMPIoctlGetEzScanTable(
	IN	PRTMP_ADAPTER pAdapter,
	IN	RTMP_IOCTL_INPUT_STRUCT *wrq);
BOOLEAN ez_join_timeout_handle(void *ad_obj, unsigned char ifIndex);
VOID ez_ApCliCtrlJoinFailAction(
	IN PRTMP_ADAPTER pAd,
	IN PMLME_QUEUE_ELEM Elem);
VOID ez_ApCliMlmeDeauthReqAction(
	IN PRTMP_ADAPTER pAd,
	IN MLME_QUEUE_ELEM *Elem);
void ez_initiate_new_scan_driver(struct wifi_dev *wdev);
#if defined(CONFIG_WIFI_PKT_FWD)
void set_wf_fwd_cb(RTMP_ADAPTER *pAd, PNDIS_PACKET pRxPkt);
#endif
