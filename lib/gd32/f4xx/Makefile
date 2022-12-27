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

OBJS += i2c_common_v1.o
OBJS += gd32f4xx_adc.o

VPATH += ../:../../cm3:./common:./GD32F4xx_standard_peripheral/Source

include ../../Makefile.include