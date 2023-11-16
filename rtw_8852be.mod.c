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
	{ 0x8bc9c2e2, "rtw89_pci_disable_intr" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x71162055, "rtw89_bd_ram_table_single" },
	{ 0x9ce0961b, "rtw89_pci_ch_dma_addr_set" },
	{ 0x430460cd, "rtw89_pci_enable_intr" },
	{ 0x4b5630c7, "rtw89_pci_probe" },
	{ 0x44bdb612, "rtw8852b_chip_info" },
	{ 0xff87e6a7, "rtw89_pci_gen_ax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc0b2bc48, "pci_unregister_driver" },
	{ 0x4557fcd3, "rtw89_pci_ltr_set" },
	{ 0xeee7b941, "rtw89_pci_config_intr_mask" },
	{ 0xf5a9a7d1, "rtw89_pci_remove" },
	{ 0x89e7e0a8, "rtw89_pci_recognize_intrs" },
	{ 0x433f0b06, "__pci_register_driver" },
	{ 0x50618732, "rtw89_pci_fill_txaddr_info" },
	{ 0x4e763c14, "rtw89_pm_ops" },
};

MODULE_INFO(depends, "rtw89pci,rtw_8852b");

MODULE_ALIAS("pci:v000010ECd0000B852sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd0000B85Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "74D9966D294D2B167987C64");
