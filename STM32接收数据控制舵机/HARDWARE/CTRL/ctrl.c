#include "ctrl.h"
#include "delay.h"
		//TIM_SetCompare1(TIM4,10);//����
		//TIM_SetCompare1(TIM4,17);//����
		//TIM_SetCompare1(TIM4,26);//����
		//TIM_SetCompare2(TIM4,21);//����
		//TIM_SetCompare2(TIM4,12);//�º� 
void Reset(void)
{
	//delay_ms(2000);
	TIM_SetCompare2(TIM4,21);//����
	TIM_SetCompare1(TIM4,17);//����
}
void Harmful(void)
{
	//delay_ms(2000);
	TIM_SetCompare2(TIM4,21);//����
	TIM_SetCompare1(TIM4,10);//����
}
void Kitchen(void)
{
	//delay_ms(2000);
	TIM_SetCompare2(TIM4,21);//����
	TIM_SetCompare1(TIM4,26);//����
}
void Other(void)
{
	//delay_ms(2000);
	TIM_SetCompare2(TIM4,12);//�º� 
	TIM_SetCompare1(TIM4,10);//����
}
void Recyclable(void)
{
	//delay_ms(2000);
	TIM_SetCompare2(TIM4,12);//�º� 
	TIM_SetCompare1(TIM4,26);//����
}
