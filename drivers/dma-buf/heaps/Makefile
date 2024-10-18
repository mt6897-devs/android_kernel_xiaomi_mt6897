# SPDX-License-Identifier: GPL-2.0
obj-$(CONFIG_DMABUF_HEAPS_DEFERRED_FREE) += deferred-free-helper.o
obj-$(CONFIG_DMABUF_HEAPS_PAGE_POOL)	+= page_pool.o
obj-$(CONFIG_DMABUF_HEAPS_SYSTEM)	+= system_heap.o
obj-$(CONFIG_DMABUF_HEAPS_CMA)		+= cma_heap.o

# system heap
system_heap-objs := \
        mtk_system_heap.o \
        mtk_page_pool.o \
        mtk_cache_pool.o \
        mtk_dmabuf_monitor.o \
        mtk-deferred-free-helper.o
obj-$(CONFIG_DMABUF_HEAPS_SYSTEM)        += system_heap.o
obj-$(CONFIG_DMABUF_HEAPS_REFILL)        += mtk_heap_refill.o

ccflags-y += -I$(srctree)/drivers/iommu/
ccflags-y += -I$(srctree)/drivers/iommu/arm/arm-smmu-v3/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/trusted_mem/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/monitor_hang/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/
obj-$(CONFIG_MTK_TRUSTED_MEMORY_SUBSYSTEM)      += mtk_sec_heap.o
obj-$(CONFIG_DMABUF_HEAPS_DEBUG) += mtk_heap_debug.o
