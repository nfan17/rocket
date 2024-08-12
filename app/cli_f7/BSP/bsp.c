
#include "bsp.h"

void BSP_Init(void)
{
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN | RCC_AHB1ENR_GPIOBEN;

    // Usart 3
    GPIOD->MODER &= ~(GPIO_MODER_MODER8 | GPIO_MODER_MODER9);
    GPIOD->MODER |= (0x2 << GPIO_MODER_MODER8_Pos) | (0x2 << GPIO_MODER_MODER9_Pos);
    GPIOD->AFR[1] &= ~(GPIO_AFRH_AFRH0 | GPIO_AFRH_AFRH1);
    GPIOD->AFR[1] |= (0x7 << GPIO_AFRH_AFRH0_Pos) | (0x7 << GPIO_AFRH_AFRH1_Pos);

    GPIOB->MODER |= 1 << GPIO_MODER_MODER0_Pos;

    RCC->APB1ENR |= RCC_APB1ENR_USART3EN;

    NVIC_SetPriorityGrouping(4);
    NVIC_SetPriority( USART3_IRQn, NVIC_EncodePriority(4, 6, 0));
    NVIC_EnableIRQ(USART3_IRQn);

}
