# SPDX-License-Identifier: GPL-2.0
# Core
obj-$(CONFIG_PINCTRL_MTK)      += pinctrl-mtk-common.o
obj-$(CONFIG_PINCTRL_MTK_MOORE) += pinctrl-moore.o
ifeq ($(CONFIG_EINT_MTK),m)
obj-m += pinctrl-mtk-v2.o
else ifeq ($(CONFIG_PINCTRL_MTK_V2),m)
obj-m += pinctrl-mtk-v2.o
else ifeq ($(CONFIG_PINCTRL_MTK_PARIS),m)
obj-m += pinctrl-mtk-v2.o
endif

ifeq ($(CONFIG_EINT_MTK),y)
obj-y += mtk-eint.o
else ifeq ($(CONFIG_EINT_MTK),m)
pinctrl-mtk-v2-y += mtk-eint.o
endif

ifeq ($(CONFIG_PINCTRL_MTK_V2),y)
obj-y += pinctrl-mtk-common-v2.o
else ifeq ($(CONFIG_PINCTRL_MTK_V2),m)
pinctrl-mtk-v2-y += pinctrl-mtk-common-v2.o
endif

ifeq ($(CONFIG_PINCTRL_MTK_PARIS),y)
obj-y += pinctrl-paris.o pinctrl-mtk-common-v2_debug.o
else ifeq ($(CONFIG_PINCTRL_MTK_PARIS),m)
pinctrl-mtk-v2-y += pinctrl-paris.o
obj-m += pinctrl-mtk-common-v2_debug.o
endif

# SoC Drivers
obj-$(CONFIG_PINCTRL_MT2701)	+= pinctrl-mt2701.o
obj-$(CONFIG_PINCTRL_MT2712)	+= pinctrl-mt2712.o
obj-$(CONFIG_PINCTRL_MT8135)	+= pinctrl-mt8135.o
obj-$(CONFIG_PINCTRL_MT8127)	+= pinctrl-mt8127.o
obj-$(CONFIG_PINCTRL_MT6765)	+= pinctrl-mt6765.o
obj-$(CONFIG_PINCTRL_MT6779)	+= pinctrl-mt6779.o
ifneq ($(wildcard $(srctree)/$(src)/pinctrl-mt6363.c),)
obj-$(CONFIG_PINCTRL_MT6363)	+= pinctrl-mt6363.o
endif
ifneq ($(wildcard $(srctree)/$(src)/pinctrl-mt6373.c),)
obj-$(CONFIG_PINCTRL_MT6373)	+= pinctrl-mt6373.o
endif
ifneq ($(wildcard $(srctree)/$(src)/pinctrl-mt6886.c),)
obj-$(CONFIG_PINCTRL_MT6886)	+= pinctrl-mt6886.o
endif
ifneq ($(wildcard $(srctree)/$(src)/pinctrl-mt6897.c),)
obj-$(CONFIG_PINCTRL_MT6897)	+= pinctrl-mt6897.o
endif
ifneq ($(wildcard $(srctree)/$(src)/pinctrl-mt6983.c),)
obj-$(CONFIG_PINCTRL_MT6983)	+= pinctrl-mt6983.o
endif
ifneq ($(wildcard $(srctree)/$(src)/pinctrl-mt6985.c),)
obj-$(CONFIG_PINCTRL_MT6985)	+= pinctrl-mt6985.o
endif
ifneq ($(wildcard $(srctree)/$(src)/pinctrl-mt6989.c),)
obj-$(CONFIG_PINCTRL_MT6989)	+= pinctrl-mt6989.o
endif
ifneq ($(wildcard $(srctree)/$(src)/pinctrl-mt8188.c),)
obj-$(CONFIG_PINCTRL_MT8188)	+= pinctrl-mt8188.o
endif
obj-$(CONFIG_PINCTRL_MT8195)    += pinctrl-mt8195.o
obj-$(CONFIG_PINCTRL_MT6795)	+= pinctrl-mt6795.o
obj-$(CONFIG_PINCTRL_MT6797)	+= pinctrl-mt6797.o
obj-$(CONFIG_PINCTRL_MT7622)	+= pinctrl-mt7622.o
obj-$(CONFIG_PINCTRL_MT7623)	+= pinctrl-mt7623.o
obj-$(CONFIG_PINCTRL_MT7629)	+= pinctrl-mt7629.o
obj-$(CONFIG_PINCTRL_MT7986)	+= pinctrl-mt7986.o
obj-$(CONFIG_PINCTRL_MT8167)	+= pinctrl-mt8167.o
obj-$(CONFIG_PINCTRL_MT8173)	+= pinctrl-mt8173.o
obj-$(CONFIG_PINCTRL_MT8183)	+= pinctrl-mt8183.o
obj-$(CONFIG_PINCTRL_MT8186)	+= pinctrl-mt8186.o
obj-$(CONFIG_PINCTRL_MT8192)	+= pinctrl-mt8192.o
obj-$(CONFIG_PINCTRL_MT8365)	+= pinctrl-mt8365.o
obj-$(CONFIG_PINCTRL_MT8516)	+= pinctrl-mt8516.o
obj-$(CONFIG_PINCTRL_MT6397)	+= pinctrl-mt6397.o
