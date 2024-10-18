# SPDX-License-Identifier: GPL-2.0
ccflags-y += -I$(srctree)/drivers/misc/mediatek/iommu

obj-$(CONFIG_ARM_SMMU_V3) += arm_smmu_v3.o
arm_smmu_v3-objs-y += arm-smmu-v3.o arm-smmu-v3-impl.o mtk-smmu-v3.o
arm_smmu_v3-objs := $(arm_smmu_v3-objs-y)

obj-$(CONFIG_MTK_SMMU_V3_PMU) += mtk-smmuv3-pmu.o
obj-$(CONFIG_MTK_SMMU_V3_LMU) += mtk-smmuv3-lmu.o
obj-$(CONFIG_MTK_SMMU_V3_MPAM_MON) += mtk-smmuv3-mpam-mon.o
