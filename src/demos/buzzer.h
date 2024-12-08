#include "stm32f10x.h"
#include "Delay.h"


void Run(){
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
    GPIO_InitTypeDef Init_Structure;
    Init_Structure.GPIO_Mode  = GPIO_Mode_Out_PP;
    Init_Structure.GPIO_Pin   = GPIO_Pin_12;
    Init_Structure.GPIO_Speed = GPIO_Speed_50MHz;

    GPIO_Init(GPIOB, &Init_Structure);
    while (1)
    {
        GPIO_ResetBits(GPIOB,GPIO_Pin_12);
        Delay_ms(500)        ;
        GPIO_SetBits(GPIOB,GPIO_Pin_12);
        Delay_ms(500);
    }
    
}
