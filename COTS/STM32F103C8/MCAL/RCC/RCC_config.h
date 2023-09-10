/***********************************************************************/
/********** Athor     : Hisham Hatem Hassan Mostafa ********************/
/********** Date      : 9 sep 2023                  ********************/
/********** Version   : 0.2                         ********************/
/********** File Name : RCC_config.h                ********************/
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


/**
 *  Your Options :      SYSCLK_DIV_2  
 *                      SYSCLK_DIV_4  
 *                      SYSCLK_DIV_8  
 *                      SYSCLK_DIV_16 
 *                      SYSCLK_DIV_32 
 *                      SYSCLK_DIV_64 
 *                      SYSCLK_DIV_128
 *                      SYSCLK_DIV_256
 *                      SYSCLK_DIV_512
*/

#define RCC_SYSCLOCK_DIV    SYSCLK_DIV_2



#endif /**< RCC_SYSCLK */




#endif  /* RCC_CONFIG_H_ */