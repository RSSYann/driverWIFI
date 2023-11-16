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
	{ 0x1d648141, "rtw89_mac_get_err_status" },
	{ 0xb5211555, "rtw89_chip_info_setup" },
	{ 0x63ce1ce7, "rtw89_core_napi_stop" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x8b5bc5b3, "pci_free_irq_vectors" },
	{ 0x1af137d9, "__rtw89_debug" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x45a7cdeb, "pci_read_config_byte" },
	{ 0xc94d0e89, "napi_schedule_prep" },
	{ 0x1e6f1b87, "dma_set_mask" },
	{ 0x3d258838, "pci_disable_device" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xb6ab2f08, "pci_write_config_byte" },
	{ 0x1c877749, "rtw89_core_deinit" },
	{ 0x92a627a0, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x145ca79, "pci_release_regions" },
	{ 0x83253110, "param_ops_bool" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x9a5550a3, "rtw89_core_rx" },
	{ 0xf9fd2771, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbbac6696, "rtw89_core_register" },
	{ 0x6eec4dac, "dma_set_coherent_mask" },
	{ 0x2e7a76ce, "skb_unlink" },
	{ 0x72d42dfa, "__netdev_alloc_skb" },
	{ 0x2715a51d, "rtw89_ser_notify" },
	{ 0xdba6dab3, "ieee80211_tx_status" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb24af53b, "pci_set_master" },
	{ 0x5be158a5, "pci_alloc_irq_vectors_affinity" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xf036341f, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xe3f57b04, "rtw89_debug_mask" },
	{ 0x41df6dea, "dma_sync_single_for_cpu" },
	{ 0x904354ef, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7f177fee, "rtw89_core_napi_start" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3c0040f, "rtw89_free_ieee80211_hw" },
	{ 0xa751b1a4, "dma_alloc_attrs" },
	{ 0x28251225, "skb_push" },
	{ 0x71b2c4e3, "rtw89_core_napi_deinit" },
	{ 0xac7ab837, "_dev_err" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x800473f, "__cond_resched" },
	{ 0xfdd287c1, "rtw89_core_init" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1a3c1502, "skb_queue_tail" },
	{ 0xe740fbad, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xbba8fa32, "__napi_schedule" },
	{ 0x8c2b27fe, "devm_free_irq" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf9fc165d, "napi_complete_done" },
	{ 0x461f3cc3, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x559bf800, "pci_read_config_dword" },
	{ 0xb06a469c, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6b2e3fa7, "rtw89_core_unregister" },
	{ 0x5c1017e3, "rtw89_core_napi_init" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x69acdf38, "memcpy" },
	{ 0x210cdac4, "pci_request_regions" },
	{ 0x2caf6f31, "dma_sync_single_for_device" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x4b4ce6ce, "dma_unmap_page_attrs" },
	{ 0xd652bf64, "skb_dequeue" },
	{ 0xa6257a2f, "complete" },
	{ 0xd6928da2, "pci_iomap" },
	{ 0x45fd71ae, "consume_skb" },
	{ 0x768d5be5, "skb_put" },
	{ 0x58a78df9, "pci_enable_device" },
	{ 0xa65a29a4, "devm_request_threaded_irq" },
	{ 0x5fe64875, "rtw89_alloc_ieee80211_hw" },
	{ 0x9cfbe814, "pci_find_ext_capability" },
	{ 0x481550fe, "pcie_capability_read_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "rtw89core,mac80211");


MODULE_INFO(srcversion, "9D4A65A85C6B900F4287AFB");
