/***********************************************************************/
/********** Athor     : Hisham Hatem Hassan Mostafa ********************/
/********** Date      : 2 sep 2023                  ********************/
/********** Version   : 0.1                         ********************/
/********** File Name : RCC_program.c          ********************/
/***********************************************************************/

/********************************< LIB *********************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
/*******************************< MCAL *********************************/
#include "RCC_private.h"
#include "RCC_interface.h"
#include "RCC_config.h"



Std_ReturnType Mcal_Rcc_InitSysClock (void)
{
    Std_ReturnType Local_FunctionStatus = E_NOT_OK;

    #if RCC_SYSCLK == RCC_HSE

        /**< select the external CLK */
        #if RCC_CLK_BYPASS == RCC_RC_CLK_
            SET_BIT(RCC_CR, RCC_RC_HSEBYP); /**< CHOOSE RC */
        #elif RCC_CLK_BYPASS == RCC_CRYSTAL_CLK_
            CLR_BIT(RCC_CR, RCC_RC_HSEBYP); /**< CHOOSE CYRSTAL */
        #else
            #error "Wrong Choice !!!"
        #endif /**< RCC_CLK_BYPASS */

        /**< enable HSE */
        SET_BIT(RCC_CR, RCC_RC_HSEON);

        /**< Wait until the CLK be stable */
        while(!GET_BIT(RCC_CR, RCC_RC_HSERDY));

        /**< select the HSE to be the SYSCLK */
        RCC_CFGR = 0x00000001 ;

        Local_FunctionStatus = E_OK;

    #elif RCC_SYSCLK == RCC_HSI

        /**< Enable HSI */
        SET_BIT(RCC_CR, RCC_RC_HSION);

        /**< Wait until the CLK be stable */
        while(!GET_BIT(RCC_CR, RCC_RC_HSIRDY));

        /**< select the HSI to be the SYSCLK */
        RCC_CFGR = 0x00000000 ;

        Local_FunctionStatus = E_OK;


    #elif RCC_SYSCLK == RCC_PLL
        /**< Enable HSI */
        SET_BIT(RCC_CR, RCC_RC_PLLON);

        /**< Wait until the CLK be stable */
        while(!GET_BIT(RCC_CR, RCC_RC_PLLRDY));

        /**< select the PLL to be the SYSCLK */
        RCC_CFGR = 0x00000002 ;   /**< ASK */

        Local_FunctionStatus = E_OK;


    #else
        #error "Wrong Choice !!!"

    #endif /**< RCC_SYSCLK */

    return Local_FunctionStatus ;
} 

/**
 * I'm Not sure about the fun and didn't know how to make it in the uper fun
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
*/

Std_ReturnType Mcal_Rcc_Pll_Mul (u8 MUL_FACTOR)
{
    #if RCC_SYSCLK == RCC_PLL
        
        RCC_PLL_MUL_FACTOR


    #endif /**< RCC_SYSCLK */
}

Std_ReturnType Mcal_Rcc_EnablePeripheral (u8 Copy_BudId, u8 Copy_PeriphralId)
{
    Std_ReturnType Local_FunctionStatus = E_NOT_OK;

    switch(Copy_BudId)
    {
        
        case RCC_AHB :
            SET_BIT(RCC_AHBENR, Copy_PeriphralId);
            Local_FunctionStatus = E_OK;
        break;

        case RCC_APB1 :
            SET_BIT(RCC_APB1ENR, Copy_PeriphralId);
            Local_FunctionStatus = E_OK;
        break;

        case RCC_APB2 :
            SET_BIT(RCC_APB2ENR, Copy_PeriphralId);
            Local_FunctionStatus = E_OK;
        break;

        default :
            Local_FunctionStatus = E_NOT_OK;
        break;

    }

    return Local_FunctionStatus ;
}

Std_ReturnType Mcal_Rcc_DisablePeripheral (u8 Copy_BudId, u8 Copy_PeriphralId)
{
    Std_ReturnType Local_FunctionStatus = E_NOT_OK;
    
    switch(Copy_BudId)
    {
        
        case RCC_AHB :
            CLR_BIT(RCC_AHBENR, Copy_PeriphralId);
            Local_FunctionStatus = E_OK;
        break;

        case RCC_APB1 :
            CLR_BIT(RCC_APB1ENR, Copy_PeriphralId);
            Local_FunctionStatus = E_OK;
        break;

        case RCC_APB2 :
            CLR_BIT(RCC_APB2ENR, Copy_PeriphralId);
            Local_FunctionStatus = E_OK;
        break;

        default :
            Local_FunctionStatus = E_NOT_OK;
        break;
    
    
    return Local_FunctionStatus ;
}


