#include "Delay.h"
int Run(){
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    GPIO_InitTypeDef Init_Structure;
    Init_Structure.GPIO_Mode  = GPIO_Mode_Out_PP;
    Init_Structure.GPIO_Pin=GPIO_Pin_All;
    Init_Structure.GPIO_Speed = GPIO_Speed_50MHz;

    GPIO_Init(GPIOA, &Init_Structure);
    GPIO_SetBits(GPIOA,GPIO_Pin_0);
    GPIO_SetBits(GPIOA,GPIO_Pin_All);
    while(1){
        for(int i=0;i<6;i++){
            GPIO_ResetBits(GPIOA,GPIO_Pin_0<<i);
            Delay_ms(500);
            GPIO_SetBits(GPIOA,GPIO_Pin_0<<i);
        }
    }
}