# SPDX-License-Identifier: GPL-2.0

subdir-ccflags-y += -Werror

ccflags-y += -I$(srctree)/drivers/gpu/drm/mediatek/dpc \
             -I$(srctree)/drivers/gpu/drm/mediatek/mml \
             -I$(srctree)/drivers/misc/mediatek/mdp \
             -I$(srctree)/drivers/gpu/drm/mediatek/mediatek_v2 \
             -I$(srctree)/drivers/misc/mediatek/cmdq/mailbox \
             -I$(srctree)/drivers/misc/mediatek/mmp \
             -I$(srctree)/drivers/misc/mediatek/mmdvfs \
             -I$(srctree)/drivers/misc/mediatek/smi \
             -I$(srctree)/drivers/soc/mediatek

obj-$(CONFIG_MTK_DPC) := mtk_dpc.o

mtk_dpc-objs += mtk_dpc_driver.o
mtk_dpc-objs += mtk_dpc_mmp.o

obj-$(CONFIG_MTK_DPC) += mtk_vdisp.o
