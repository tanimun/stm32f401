#include "stm32f4xx.h"                  // Device header

int main(void)
	
{
		RCC->AHB1ENR |=4; // ENABLE PORT C
		RCC->AHB1ENR |=1; // ENABLE PORT A

		GPIOA-> MODER |= 0x400;
	
		while(1)
		{
		
		if(GPIOC-> IDR & 0x02000)
		{
		
			GPIOA->BSRR = 0x002;
		}			
		
		else{
		
				GPIOA ->BSRR = 0x20;
		
		}
		
		
		}
}
