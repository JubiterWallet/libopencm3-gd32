/*!
    \file  gd32f4xx_mpu.h
    \brief definitions for the MPU
*/

/*
    Copyright (C) 2016 GigaDevice

    2016-08-15, V1.0.3, firmware update for GD32F4xx
*/

#ifndef GD32F4XX_MPU_H
#define GD32F4XX_MPU_H

/* includes */
#include "core_cm4.h"
#include "gd32f4xx.h"

/* MPU region initialization structure */
typedef struct {
  uint8_t enable;             /*!< MPU region enable */
  uint8_t region_size;        /*!< the size of the region to protect */
  uint8_t sub_region_disable; /*!< the number of the subregion protection to
                                 disable */
  uint8_t bufferable; /*!< the bufferable status of the protected region */
  uint8_t cacheable;  /*!< the cacheable status of the protected region  */
  uint8_t shareable;  /*!< the shareability status of the protected region */
  uint8_t type_extension_field;   /*!< the TEX field level */
  uint8_t access_permission;      /*!< the region access permission type */
  uint8_t instruction_accessable; /*!< the instruction access status */
  uint32_t base_address; /*!< the base address of the region to protect */
  uint8_t number;        /*!< MPU region number */
} mpu_region_init_struct;

/* MPU region struct parameter options */
/* MPU region enable */
#define MPU_REGION_ENABLE ((uint8_t)0x01)
#define MPU_REGION_DISABLE ((uint8_t)0x00)

/* MPU region size */
#define MPU_REGION_SIZE_32B ((uint8_t)0x04)
#define MPU_REGION_SIZE_64B ((uint8_t)0x05)
#define MPU_REGION_SIZE_128B ((uint8_t)0x06)
#define MPU_REGION_SIZE_256B ((uint8_t)0x07)
#define MPU_REGION_SIZE_512B ((uint8_t)0x08)
#define MPU_REGION_SIZE_1KB ((uint8_t)0x09)
#define MPU_REGION_SIZE_2KB ((uint8_t)0x0A)
#define MPU_REGION_SIZE_4KB ((uint8_t)0x0B)
#define MPU_REGION_SIZE_8KB ((uint8_t)0x0C)
#define MPU_REGION_SIZE_16KB ((uint8_t)0x0D)
#define MPU_REGION_SIZE_32KB ((uint8_t)0x0E)
#define MPU_REGION_SIZE_64KB ((uint8_t)0x0F)
#define MPU_REGION_SIZE_128KB ((uint8_t)0x10)
#define MPU_REGION_SIZE_256KB ((uint8_t)0x11)
#define MPU_REGION_SIZE_512KB ((uint8_t)0x12)
#define MPU_REGION_SIZE_1MB ((uint8_t)0x13)
#define MPU_REGION_SIZE_2MB ((uint8_t)0x14)
#define MPU_REGION_SIZE_4MB ((uint8_t)0x15)
#define MPU_REGION_SIZE_8MB ((uint8_t)0x16)
#define MPU_REGION_SIZE_16MB ((uint8_t)0x17)
#define MPU_REGION_SIZE_32MB ((uint8_t)0x18)
#define MPU_REGION_SIZE_64MB ((uint8_t)0x19)
#define MPU_REGION_SIZE_128MB ((uint8_t)0x1A)
#define MPU_REGION_SIZE_256MB ((uint8_t)0x1B)
#define MPU_REGION_SIZE_512MB ((uint8_t)0x1C)
#define MPU_REGION_SIZE_1GB ((uint8_t)0x1D)
#define MPU_REGION_SIZE_2GB ((uint8_t)0x1E)
#define MPU_REGION_SIZE_4GB ((uint8_t)0x1F)

/* MPU subregion disable */
#define MPU_SUB_REGION_ALL_DISABLE ((uint8_t)0x00)
#define MPU_SUB_REGION_0_ENABLE ((uint8_t)0x01)
#define MPU_SUB_REGION_1_ENABLE ((uint8_t)0x02)
#define MPU_SUB_REGION_2_ENABLE ((uint8_t)0x04)
#define MPU_SUB_REGION_3_ENABLE ((uint8_t)0x08)
#define MPU_SUB_REGION_4_ENABLE ((uint8_t)0x10)
#define MPU_SUB_REGION_5_ENABLE ((uint8_t)0x20)
#define MPU_SUB_REGION_6_ENABLE ((uint8_t)0x40)
#define MPU_SUB_REGION_7_ENABLE ((uint8_t)0x80)

/* MPU instruction access bufferable */
#define MPU_ACCESS_BUFFERABLE ((uint8_t)0x01)
#define MPU_ACCESS_NOT_BUFFERABLE ((uint8_t)0x00)

/* MPU instruction access cacheable */
#define MPU_ACCESS_CACHEABLE ((uint8_t)0x01)
#define MPU_ACCESS_NOT_CACHEABLE ((uint8_t)0x00)

/* MPU instruction access shareable */
#define MPU_ACCESS_SHAREABLE ((uint8_t)0x01)
#define MPU_ACCESS_NOT_SHAREABLE ((uint8_t)0x00)

/* MPU TEX levels */
#define MPU_TEX_LEVEL_0 ((uint8_t)0x00)
#define MPU_TEX_LEVEL_1 ((uint8_t)0x01)
#define MPU_TEX_LEVEL_2 ((uint8_t)0x02)

/* MPU access permission */
#define MPU_REGION_PRIV_DISABLE_USER_DISABLE ((uint8_t)0x00)
#define MPU_REGION_PRIV_READ_WRITE ((uint8_t)0x01)
#define MPU_REGION_PRIV_READ_WRITE_USER_READ_ONLY ((uint8_t)0x02)
#define MPU_REGION_PRIV_READ_WRITE_USER_READ_WRITE ((uint8_t)0x03)
#define MPU_REGION_PRIV_READ_ONLY ((uint8_t)0x05)
#define MPU_REGION_PRIV_READ_ONLY_USER_READ_ONLY ((uint8_t)0x06)

/* MPU instruction access */
#define MPU_INSTRUCTION_ACCESS_ENABLE ((uint8_t)0x00)
#define MPU_INSTRUCTION_ACCESS_DISABLE ((uint8_t)0x01)

/* MPU region number */
#define MPU_REGION_NUMBER_0 ((uint8_t)0x00)
#define MPU_REGION_NUMBER_1 ((uint8_t)0x01)
#define MPU_REGION_NUMBER_2 ((uint8_t)0x02)
#define MPU_REGION_NUMBER_3 ((uint8_t)0x03)
#define MPU_REGION_NUMBER_4 ((uint8_t)0x04)
#define MPU_REGION_NUMBER_5 ((uint8_t)0x05)
#define MPU_REGION_NUMBER_6 ((uint8_t)0x06)
#define MPU_REGION_NUMBER_7 ((uint8_t)0x07)

/* MPU control register PRIVDEFENA and HFNMIENA bit chose */
#define MPU_HFNMI_DISABLE_PRIVDEF_DISABLE 0x00000000U
#define MPU_HFNMI_ENABLE_PRIVDEF_DISABLE MPU_CTRL_HFNMIENA_Msk
#define MPU_HFNMI_DISABLE_PRIVDEF_ENABLE MPU_CTRL_PRIVDEFENA_Msk
#define MPU_HFNMI_ENABLE_PRIVDEF_ENABLE \
  (MPU_CTRL_HFNMIENA_Msk | MPU_CTRL_PRIVDEFENA_Msk)

/* MPU type register test */
#define MPU_TEST MPU->TYPE
#define MPU_NOT_EXISTENT 0x00000000U

/* enable mpu */
void mpu_enable(uint32_t mpu_control);
/* disable mpu */
void mpu_disable(void);
/* configure mpu region */
void mpu_region_config(mpu_region_init_struct *mpu_init);

/* setup mpu regions */
void mpu_setup_boot_region(void);
void mpu_setup_firm_region(void);

#endif /* GD32F4XX_MPU_H */
