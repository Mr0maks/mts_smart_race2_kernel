ifeq ($(CONFIG_MTK_FPGA),y)
obj-y	:= mt_gpio_fpga.o
else
ccflags-y += -I$(srctree)/drivers/misc/mediatek/gpio/mt6735
obj-y	:= mt_gpio_base.o
endif
obj-y	+= mt_gpio_affix.o mt_gpio_debug.o mt_gpio_ext.o
ifeq ($(CONFIG_GPIOLIB),y)
obj-y	+= mt_gpio_base_linux.o
endif
# obj-y	+= dcl_sim_gpio.o
