
#include "bsp.h"

void BSP_Init(void)
{
    RCC->AHB2ENR |= RCC_AHB2ENR_GPIOAEN;
    GPIOA->MODER &= ~(GPIO_MODER_MODE5
                    | GPIO_MODER_MODE0);
    GPIOA->MODER |= (GPIO_MODER_MODE5_0
                    | GPIO_MODER_MODE0_0);
    
}