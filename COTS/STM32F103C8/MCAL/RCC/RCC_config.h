/***********************************************************************/
/********** Athor     : Hisham Hatem Hassan Mostafa ********************/
/********** Date      : 2 sep 2023                  ********************/
/********** Version   : 0.1                         ********************/
/********** File Name : RCC_config.h           *************************/
/***********************************************************************/
#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_


/**
 *  Your Options :  RCC_HSE
 *                  RCC_HSI
 *                  RCC_PLL
*/

#define RCC_SYSCLK    RCC_PLL


#if RCC_SYSCLK == RCC_HSE 

/**
 *  Your Options :    RCC_RC_CLK_
 *                    RCC_CRYSTAL_CLK_
*/

#define RCC_CLK_BYPASS      RCC_RC_CLK_


#elif RCC_SYSCLK == RCC_PLL

/**
 *  Your Options :    PLL_MUL_2
 *                    PLL_MUL_3
 *                    PLL_MUL_4 
 *                    PLL_MUL_5 
 *                    PLL_MUL_6 
 *                    PLL_MUL_7 
 *                    PLL_MUL_8 
 *                    PLL_MUL_9 
 *                    PLL_MUL_10 
 *                    PLL_MUL_11 
 *                    PLL_MUL_12 
 *                    PLL_MUL_13 
 *                    PLL_MUL_14 
 *                    PLL_MUL_15 
 *                    PLL_MUL_16 
*/


#define RCC_PLL_MUL_FACTOR   PLL_MUL_2



#endif /**< RCC_SYSCLK */




#endif  /* RCC_CONFIG_H_ */