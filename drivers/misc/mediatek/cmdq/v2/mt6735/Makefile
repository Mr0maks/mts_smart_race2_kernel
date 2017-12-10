# drivers/cmdq

ccflags-y += -I$(srctree)/drivers/misc/mediatek/cmdq/v2
ccflags-y += -I$(srctree)/drivers/misc/mediatek/cmdq/v2/mt6735/

# Enable MET
ccflags-y += -DMET_USER_EVENT_SUPPORT

# Common Clock Framework
ifneq ($(CONFIG_MTK_CLKMGR),y)
ifeq ($(CONFIG_ARCH_MT6735),y)
ccflags-y += -DCMDQ_USE_CCF
endif
endif

obj-y += cmdq_mdp.o
