# common part
ccflags-y += -I$(srctree)/drivers/dma-buf/heaps/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/geniezone/public/
ccflags-y += -I$(srctree)/drivers/iommu/arm/arm-smmu-v3/

# sapu
ccflags-y += -I$(srctree)/drivers/misc/mediatek/apusys/sapu/
sapu-objs := sapu_init.o
sapu-objs += sapu_driver.o

ccflags-y += -I$(srctree)/drivers/misc/mediatek/apusys/sapu/platform/
sapu-objs += platform/sapu_plat.o

sapu-objs += platform/sapu_cb/sapu_cb_common.o
sapu-objs += platform/sapu_cb/power/sapu_cb_pwr_ctrl_v1.o
sapu-objs += platform/sapu_cb/power/sapu_cb_pwr_ctrl_v2.o

obj-$(CONFIG_MTK_APUSYS_SUPPORT) += sapu.o
