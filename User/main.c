#include "STM32F10X.H"
#include "Delay.h"
#include "LED.h"
#include "Buzzer.h"
#include "Key.h"
#include "OLED.h"
#include "Servo.h"

uint8_t KeyNum;
float Angle = 0;

int main(void)
{
	LED_Init();
	Buzzer_Init();
	Key_Init();
	OLED_Init();
	PWM_Init();
	Servo_Init();
	
	OLED_ShowString(1, 1, "Angle:");
	
	while (1)
	{
		KeyNum = Key_GetNum();
		if (KeyNum == 1)
		{
			Angle += 10;
			if (Angle > 180)
			{
				Angle = 0;
			}
		}
		Servo_SetAngle(Angle);
		OLED_ShowNum(1, 7, Angle, 3);
	}
}
