/***********************************************************************/
/********** Athor     : Hisham Hatem Hassan Mostafa ********************/
/********** Date      : 9 sep 2023                  ********************/
/********** Version   : 0.2                         ********************/
/********** File Name : RCC_interface.h             ********************/
/***********************************************************************/
#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_


#define RCC_AHB                 0
#define RCC_APB1                1
#define RCC_APB2                2


#define RCC_AHBENR_DMA1EN          0
#define RCC_AHBENR_DMA2EN          1
#define RCC_AHBENR_SRAMEN          2
#define RCC_AHBENR_FLITFEN         4
#define RCC_AHBENR_CRCEN           6
#define RCC_AHBENR_OTGFSEN         12
#define RCC_AHBENR_ETHMACEN        14
#define RCC_AHBENR_ETHMACTXEN      15
#define RCC_AHBENR_ETHMACRXEN      16

#define RCC_APB1ENR_TIM2EN         0
#define RCC_APB1ENR_TIM3EN         1
#define RCC_APB1ENR_TIM4EN         2
#define RCC_APB1ENR_TIM5EN         3
#define RCC_APB1ENR_TIM6EN         4
#define RCC_APB1ENR_TIM7EN         5
#define RCC_APB1ENR_WWDGEN         11
#define RCC_APB1ENR_SPI2EN         14
#define RCC_APB1ENR_SPI3EN         15
#define RCC_APB1ENR_USART2EN       17
#define RCC_APB1ENR_USART3EN       18
#define RCC_APB1ENR_USART4EN       19
#define RCC_APB1ENR_USART5EN       20
#define RCC_APB1ENR_I2C1EN         21
#define RCC_APB1ENR_I2C2EN         22
#define RCC_APB1ENR_CAN1EN         25
#define RCC_APB1ENR_CAN2EN         26
#define RCC_APB1ENR_BKPEN          27
#define RCC_APB1ENR_PWREN          28
#define RCC_APB1ENR_DACEN          29

#define RCC_APB2ENR_AFIOEN         0
#define RCC_APB2ENR_IOPAEN         2
#define RCC_APB2ENR_IOPBEN         3
#define RCC_APB2ENR_IOPCEN         4
#define RCC_APB2ENR_IOPDEN         5
#define RCC_APB2ENR_IOPEEN         6
#define RCC_APB2ENR_ADC1EN         9
#define RCC_APB2ENR_ADC2EN         10
#define RCC_APB2ENR_TIM1EN         11
#define RCC_APB2ENR_SPI1EN         12
#define RCC_APB2ENR_USART1EN       14




Std_ReturnType Mcal_Rcc_InitSysClock (void); 

Std_ReturnType Mcal_Rcc_Pll_Mul (void);

Std_ReturnType Mcal_Rcc_SysClock_Div (void);

Std_ReturnType Mcal_Rcc_EnablePeripheral (u8 Copy_BudId, u8 Copy_PeriphralId);

Std_ReturnType Mcal_Rcc_DisablePeripheral (u8 Copy_BudId, u8 Copy_PeriphralId);



#endif  /* RCC_INTERFACE_H_ */