#include "stm32f10x.h"                  // Device header

void LED_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = 0x0003;									// 初始化A0和A1两个引脚
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	GPIO_SetBits(GPIOA, 0x0003);													//让LED熄灭
}

void LED_Set(Pin, State)
{
	if(State) 
		{
			GPIO_ResetBits (GPIOA, 0x0001<<Pin);
		}
	else
		{
			GPIO_SetBits (GPIOA, 0x0001<<Pin);
		}
}

void LED_Turn(Pin)
{
	if (GPIO_ReadOutputDataBit(GPIOA, 0x0001<<Pin) == 0)
	{
		GPIO_SetBits (GPIOA, 0x0001<<Pin);
	}
	else
	{
		GPIO_ResetBits (GPIOA, 0x0001<<Pin);
	}
}
