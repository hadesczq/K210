#include "ctrl.h"
#include "delay.h"
		//TIM_SetCompare1(TIM4,10);//����
		//TIM_SetCompare1(TIM4,17);//����
		//TIM_SetCompare1(TIM4,26);//����
		//TIM_SetCompare2(TIM4,21);//����
		//TIM_SetCompare2(TIM4,12);//�º� 
void Reset(void)
{
	delay_ms(500);
	TIM_SetCompare2(TIM4,21);//����
	TIM_SetCompare1(TIM4,17);//����
	delay_ms(1000);
}
void Harmful(void)
{
	delay_ms(500);
	TIM_SetCompare2(TIM4,21);//����
	TIM_SetCompare1(TIM4,10);//����
	delay_ms(1000);
}
void Kitchen(void)
{
	delay_ms(500);
	TIM_SetCompare2(TIM4,21);//����
	TIM_SetCompare1(TIM4,26);//����
	delay_ms(1000);
}
void Other(void)
{
	delay_ms(500);
	TIM_SetCompare2(TIM4,12);//�º� 
	TIM_SetCompare1(TIM4,10);//����
	delay_ms(1000);
}
void Recyclable(void)
{
	delay_ms(500);
	TIM_SetCompare2(TIM4,12);//�º� 
	TIM_SetCompare1(TIM4,26);//����
	delay_ms(1000);
}
