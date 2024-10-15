# SPDX-License-Identifier: GPL-2.0

ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/blocktag/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/power_throttling/
ccflags-y += -I$(srctree)/drivers/ufs/core/
ccflags-y += -I$(srctree)/drivers/ufs/host/vendor/
ccflags-y += -I$(srctree)/drivers/devfreq/
ccflags-y += -I$(srctree)/kernel/

obj-$(CONFIG_SCSI_UFS_DWC_TC_PCI) += tc-dwc-g210-pci.o ufshcd-dwc.o tc-dwc-g210.o
obj-$(CONFIG_SCSI_UFS_DWC_TC_PLATFORM) += tc-dwc-g210-pltfrm.o ufshcd-dwc.o tc-dwc-g210.o
obj-$(CONFIG_SCSI_UFS_CDNS_PLATFORM) += cdns-pltfrm.o
obj-$(CONFIG_SCSI_UFS_QCOM) += ufs_qcom.o
ufs_qcom-y += ufs-qcom.o
ufs_qcom-$(CONFIG_SCSI_UFS_CRYPTO) += ufs-qcom-ice.o
obj-$(CONFIG_SCSI_UFS_EXYNOS) += ufs-exynos.o
obj-$(CONFIG_SCSI_UFSHCD_PCI) += ufshcd-pci.o
obj-$(CONFIG_SCSI_UFSHCD_PLATFORM) += ufshcd-pltfrm.o
obj-$(CONFIG_SCSI_UFS_HISI) += ufs-hisi.o
obj-$(CONFIG_SCSI_UFS_RENESAS) += ufs-renesas.o
obj-$(CONFIG_SCSI_UFS_SPRD) += ufs-sprd.o
obj-$(CONFIG_SCSI_UFS_TI_J721E) += ti-j721e-ufs.o
obj-$(CONFIG_DEVICE_MODULES_SCSI_UFS_MEDIATEK) += vendor/
obj-$(CONFIG_SCSI_UFS_MEDIATEK_DBG) += ufs-mediatek-dbg.o
