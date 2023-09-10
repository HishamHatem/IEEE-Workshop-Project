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


#define PLL_MUL_2               0b0000000000000000000000
#define PLL_MUL_3               0b0001000000000000000000
#define PLL_MUL_4               0b0010000000000000000000
#define PLL_MUL_5               0b0011000000000000000000
#define PLL_MUL_6               0b0100000000000000000000
#define PLL_MUL_7               0b0101000000000000000000
#define PLL_MUL_8               0b0110000000000000000000
#define PLL_MUL_9               0b0111000000000000000000
#define PLL_MUL_10              0b1000000000000000000000
#define PLL_MUL_11              0b1001000000000000000000
#define PLL_MUL_12              0b1010000000000000000000
#define PLL_MUL_13              0b1011000000000000000000
#define PLL_MUL_14              0b1100000000000000000000
#define PLL_MUL_15              0b1101000000000000000000
#define PLL_MUL_16              0b1110000000000000000000
#define PLL_MUL_16              0b1111000000000000000000


#define SYSCLK_DIV_2            0b00000000
#define SYSCLK_DIV_4            0b10000000
#define SYSCLK_DIV_8            0b10010000
#define SYSCLK_DIV_16           0b10100000
#define SYSCLK_DIV_32           0b10110000
#define SYSCLK_DIV_64           0b11000000
#define SYSCLK_DIV_128          0b11010000
#define SYSCLK_DIV_256          0b11100000
#define SYSCLK_DIV_512          0b11110000




#endif  /* RCC_PRIVATE_H_ */