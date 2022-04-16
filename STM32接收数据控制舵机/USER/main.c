#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "timer.h"

int flag1 = 0;
/************************************************
 ALIENTEKս��STM32������ʵ��8
 ��ʱ���ж�ʵ��
 ����֧�֣�www.openedv.com
 �Ա����̣�http://eboard.taobao.com 
 ��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 ������������ӿƼ����޹�˾  
 ���ߣ�����ԭ�� @ALIENTEK
************************************************/
 int main(void)
 {		
  
	delay_init();	    	 //��ʱ������ʼ��	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(115200);	 //���ڳ�ʼ��Ϊ115200
 	LED_Init();			     //LED�˿ڳ�ʼ��
	TIM4_PWM_Init(200,7199);//10Khz�ļ���Ƶ�ʣ�������5Ϊ0.5ms  
	KEY_Init();
		
//  TIM_SetCompare2(TIM4,21);//����
//	TIM_SetCompare1(TIM4,10);//����
//	 USART_SendData(USART1,1);        //��������A
	while(1)
	{
		
		
			if(flag1 == 1)
			{
				delay_ms(1000);
				TIM_SetCompare2(TIM4,21);//����
				TIM_SetCompare1(TIM4,17);//����
				delay_ms(1000);
					
	  }
		//TIM_SetCompare1(TIM4,10);//����
		//TIM_SetCompare1(TIM4,17);//����
		//TIM_SetCompare1(TIM4,26);//����
		//TIM_SetCompare2(TIM4,21);//����
		//TIM_SetCompare2(TIM4,12);//�º� 
	}
}	 
 
