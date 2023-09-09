/***********************************************************************/
/********** Athor     : Hisham Hatem Hassan Mostafa ********************/
/********** Date      : 2 sep 2023                  ********************/
/********** Version   : 0.1                         ********************/
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


#define PLL_MUL_2               0b0000
#define PLL_MUL_3               0b0001
#define PLL_MUL_4               0b0010
#define PLL_MUL_5               0b0011
#define PLL_MUL_6               0b0100
#define PLL_MUL_7               0b0101
#define PLL_MUL_8               0b0110
#define PLL_MUL_9               0b0111
#define PLL_MUL_10              0b1000
#define PLL_MUL_11              0b1001
#define PLL_MUL_12              0b1010
#define PLL_MUL_13              0b1011
#define PLL_MUL_14              0b1100
#define PLL_MUL_15              0b1101
#define PLL_MUL_16              0b1110
#define PLL_MUL_16              0b1111




#endif  /* RCC_PRIVATE_H_ */