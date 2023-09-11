/***********************************************************************/
/********** Athor     : Hisham Hatem Hassan Mostafa ********************/
/********** Date      : 9 sep 2023                  ********************/
/********** Version   : 0.2                         ********************/
/********** File Name : RCC_private.h               ********************/
/***********************************************************************/
#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_

#define RCC_BASE_ADDRESS   (*(volatile u32 *)0x40021000)


#define RCC_CR             (*(volatile u32 *)0x40021000+0x00)
#define RCC_CFGR           (*(volatile u32 *)0x40021000+0x04)
#define RCC_CIR            (*(volatile u32 *)0x40021000+0x08)
#define RCC_APB2RSTR       (*(volatile u32 *)0x40021000+0x0C)
#define RCC_APB1RSTR       (*(volatile u32 *)0x40021000+0x10)
#define RCC_AHBENR         (*(volatile u32 *)0x40021000+0x14)
#define RCC_APB2ENR        (*(volatile u32 *)0x40021000+0x18)
#define RCC_APB1ENR        (*(volatile u32 *)0x40021000+0x1C)
#define RCC_BDCR           (*(volatile u32 *)0x40021000+0x20)
#define RCC_CSR            (*(volatile u32 *)0x40021000+0x24)


/**< Register Bits */
#define RCC_RC_HSION              0
#define RCC_RC_HSIRDY             1
#define RCC_RC_HSERDY             17
#define RCC_RC_HSEON              16
#define RCC_RC_HSEBYP             18
#define RCC_RC_PLLON              24
#define RCC_RC_PLLRDY             25



#define RCC_HSI                   0
#define RCC_HSE                   1
#define RCC_PLL                   2


#define RCC_RC_CLK_               1
#define RCC_CRYSTAL_CLK_          0


#define PLL_MUL_2               0x00000000
#define PLL_MUL_3               0x00040000
#define PLL_MUL_4               0x00080000
#define PLL_MUL_5               0x000C0000
#define PLL_MUL_6               0x00100000
#define PLL_MUL_7               0x00140000
#define PLL_MUL_8               0x00180000
#define PLL_MUL_9               0x001C0000
#define PLL_MUL_10              0x00200000
#define PLL_MUL_11              0x00240000
#define PLL_MUL_12              0x00280000
#define PLL_MUL_13              0x002C0000
#define PLL_MUL_14              0x00300000
#define PLL_MUL_15              0x00240000
#define PLL_MUL_16              0x00280000
#define PLL_MUL_16              0x002C0000


#define SYSCLK_DIV_2            0x00000000
#define SYSCLK_DIV_4            0x00000080
#define SYSCLK_DIV_8            0x00000090
#define SYSCLK_DIV_16           0x000000A0
#define SYSCLK_DIV_32           0x000000B0
#define SYSCLK_DIV_64           0x000000C0
#define SYSCLK_DIV_128          0x000000D0
#define SYSCLK_DIV_256          0x000000E0
#define SYSCLK_DIV_512          0x000000F0
 



#endif  /* RCC_PRIVATE_H_ */