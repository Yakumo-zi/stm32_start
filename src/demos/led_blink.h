#include "stm32f10x.h"
#include "Delay.h"
int Run()
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    GPIO_InitTypeDef Init_Structure;
    Init_Structure.GPIO_Mode  = GPIO_Mode_Out_PP;
    Init_Structure.GPIO_Pin   = GPIO_Pin_0;
    Init_Structure.GPIO_Speed = GPIO_Speed_50MHz;

    GPIO_Init(GPIOA, &Init_Structure);

    // GPIO_ResetBits(GPIOA,GPIO_Pin_0);
    // GPIO_SetBits(GPIOA,GPIO_Pin_0);
    // GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_SET);
    while (1){
    GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_RESET);
    Delay_ms(500);
    GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_SET);
    Delay_ms(500);
    }
}