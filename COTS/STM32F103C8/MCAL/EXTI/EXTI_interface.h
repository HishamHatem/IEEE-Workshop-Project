/***********************************************************************/
/********** Athor     : Hisham Hatem Hassan Mostafa ********************/
/********** Date      : 2 sep 2023                  ********************/
/********** Version   : 0.1                         ********************/
/********** File Name : EXTI_interface.h            ********************/
/***********************************************************************/
#ifndef EXTI_INTERFACE_H
#define EXTI_INTERFACE_H

#define EXTI_RISING_EDGE        0
#define EXTI_FALLING_EDGE       1
#define EXTI_BOTH_EDGE          2

/**< LINES */
#define EXTI0           0 
#define EXTI0           1
#define EXTI0           2
#define EXTI0           3
#define EXTI0           4
#define EXTI0           5
#define EXTI0           6
#define EXTI0           7
#define EXTI0           8
#define EXTI0           9
#define EXTI0           
#define EXTI0           


Std_ReturnType EXTI_Init (void);

Std_ReturnType EXTI_Enable (u8 Copy_Line);

Std_ReturnType EXTI_Disable (u8 Copy_Line);

Std_ReturnType EXTI_SetPinTrigger (u8 Copy_Line, u8 Copy_Mode);



#endif  /**< EXTI_INTERFACE_H */