#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4cf819e6, "module_layout" },
	{ 0xcdf514b4, "rtw89_phy_config_rf_reg_v1" },
	{ 0xc47a482a, "rtw89_mac_stop_sch_tx" },
	{ 0x1af137d9, "__rtw89_debug" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x9ac85705, "rtw89_mac_size" },
	{ 0x5e0cde82, "rtw89_mac_cfg_ctrl_path" },
	{ 0x6e91b0ab, "rtw89_phy_read_rf_v1" },
	{ 0x98134d2d, "rtw89_mac_resume_sch_tx" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xccb6233e, "rtw89_encode_chan_idx" },
	{ 0x38223de1, "rtw89_rfk_parser" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbea3c569, "rtw89_btc_ntfy_wl_rfk" },
	{ 0x6774f363, "rtw89_mac_write_xtal_si" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x916196ae, "rtw89_phy_gen_ax" },
	{ 0x8a0fdda9, "rtw89_phy_write_reg3_tbl" },
	{ 0xf036341f, "_dev_warn" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3d24a10a, "rtw89_btc_set_policy_v1" },
	{ 0x222a9d68, "rtw89_mac_cfg_ppdu_status" },
	{ 0x6a1b76cc, "rtw89_phy_write32_idx" },
	{ 0xe3561947, "rtw89_core_query_rxdesc" },
	{ 0x800473f, "__cond_resched" },
	{ 0x9150b42f, "rtw89_mac_coex_init" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xe740fbad, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x65ed2e08, "rtw89_mac_gen_ax" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x83e4af2, "rtw89_phy_load_txpwr_byrate" },
	{ 0xd829a5e7, "rtw89_phy_get_txsc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf2414bb3, "rtw89_core_fill_txdesc" },
	{ 0xc2e66feb, "rtw89_decode_chan_idx" },
	{ 0xcee9e05, "rtw89_mac_read_xtal_si" },
	{ 0xdc562355, "rtw89_read_efuse_ver" },
	{ 0x9f03da33, "rtw89_phy_write_rf_v1" },
	{ 0x1ecfb13a, "rtw89_mac_cfg_gnt" },
};

MODULE_INFO(depends, "rtw89core,cfg80211");


MODULE_INFO(srcversion, "A57C2A85C5A48BAEE668E79");
