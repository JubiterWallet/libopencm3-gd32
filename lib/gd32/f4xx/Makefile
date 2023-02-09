LIBNAME		= libopencm3_gd32f4xx
SRCLIBDIR	?= ../..

CC		= $(PREFIX)gcc
AR		= $(PREFIX)ar
#设定包含文件目录
INC_FLAGS= -I ./GD32F4xx_standard_peripheral/Include  \
		   -I ./CMSIS/GD/GD32F4xx/Include \
           -I ./CMSIS  \
		   -I ../../../include


TGT_CFLAGS +=  -W -Wall -mcpu=cortex-m4 -mthumb
TGT_CFLAGS +=  -ffunction-sections -fdata-sections
TGT_CFLAGS +=  -D GD32F470 -D USE_STDPERIPH_DRIVER
TGT_CFLAGS +=  -D STM32F4
TGT_CFLAGS +=   $(INC_FLAGS) -Os -std=gnu11
TGT_CFLAGS      += $(DEBUG_FLAGS)
# ARFLAGS	= rcsv
ARFLAGS		= rcs

# gd32_libs
OBJS += gd32f4xx_adc.o gd32f4xx_can.o gd32f4xx_crc.o gd32f4xx_ctc.o gd32f4xx_dac.o
OBJS += gd32f4xx_dbg.o gd32f4xx_dci.o gd32f4xx_dma.o gd32f4xx_enet.o gd32f4xx_exmc.o
OBJS += gd32f4xx_exti.o gd32f4xx_fwdgt.o gd32f4xx_gpio.o gd32f4xx_i2c.o gd32f4xx_ipa.o
OBJS += gd32f4xx_iref.o gd32f4xx_misc.o gd32f4xx_pmu.o gd32f4xx_rcu.o gd32f4xx_rtc.o
OBJS += gd32f4xx_sdio.o gd32f4xx_spi.o gd32f4xx_syscfg.o gd32f4xx_timer.o gd32f4xx_tli.o
OBJS += gd32f4xx_trng.o gd32f4xx_usart.o gd32f4xx_wwdgt.o gd32f4xx_fmc.o gd32f4xx_mpu.o


# stm32_libs
OBJS += adc_common_v1.o adc_common_v1_multi.o adc_common_f47.o
OBJS += crc_common_all.o
OBJS += crypto_common_f24.o
OBJS += dac_common_all.o dac_common_v1.o
OBJS += dcmi_common_f47.o
OBJS += desig_common_all.o desig_common_v1.o
OBJS += dma_common_f24.o
OBJS += dma2d_common_f47.o
OBJS += dsi_common_f47.o
OBJS += exti_common_all.o
OBJS += flash.o flash_common_all.o flash_common_f.o flash_common_f24.o
OBJS += flash_common_idcache.o
OBJS += fmc_common_f47.o
OBJS += gpio_common_all.o gpio_common_f0234.o
OBJS += hash_common_f24.o
OBJS += i2c_common_v1.o
OBJS += iwdg_common_all.o
OBJS += lptimer_common_all.o
OBJS += ltdc_common_f47.o
OBJS += pwr_common_v1.o pwr.o
OBJS += rcc_common_all.o rcc.o
OBJS += rng_common_v1.o
OBJS += rtc_common_l1f024.o rtc.o
OBJS += spi_common_all.o spi_common_v1.o spi_common_v1_frf.o
OBJS += timer_common_all.o timer_common_f0234.o timer_common_f24.o
OBJS += usart_common_all.o usart_common_f124.o
OBJS += quadspi_common_v1.o

# usb related
OBJS += usb.o usb_standard.o usb_control.o usb_msc.o
OBJS += usb_hid.o
OBJS += usb_audio.o usb_cdc.o usb_midi.o
OBJS += usb_dwc_common.o usb_f107.o usb_gd32f470.o


VPATH += ../:../../cm3:../../usb:./common:./GD32F4xx_standard_peripheral/Source:./CMSIS/GD/GD32F4xx/Source

include ../../Makefile.include