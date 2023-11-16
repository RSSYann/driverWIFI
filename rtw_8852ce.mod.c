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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4cf819e6, "module_layout" },
	{ 0x6efd9f2c, "rtw89_bd_ram_table_dual" },
	{ 0xf630d9a9, "rtw89_pci_ch_dma_addr_set_v1" },
	{ 0xab87557, "rtw89_pci_recognize_intrs_v1" },
	{ 0x3486fa09, "rtw89_pci_enable_intr_v1" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x7e739b7a, "rtw89_pci_disable_intr_v1" },
	{ 0x4b5630c7, "rtw89_pci_probe" },
	{ 0x11ef7af7, "rtw89_pci_config_intr_mask_v1" },
	{ 0xff87e6a7, "rtw89_pci_gen_ax" },
	{ 0x27084485, "rtw89_pci_ltr_set_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc0b2bc48, "pci_unregister_driver" },
	{ 0xde1d01df, "rtw89_pci_fill_txaddr_info_v1" },
	{ 0xf5a9a7d1, "rtw89_pci_remove" },
	{ 0x433f0b06, "__pci_register_driver" },
	{ 0x4e763c14, "rtw89_pm_ops" },
	{ 0xdf18fa7d, "rtw8852c_chip_info" },
};

MODULE_INFO(depends, "rtw89pci,rtw_8852c");

MODULE_ALIAS("pci:v000010ECd0000C852sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7F8CD66C9BE2F523BCFFE67");
