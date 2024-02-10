#include <stdio.h>
#include <string.h>

#include "main.h"
#include "projectMain.h"

void ProjectMain()
{
	while(1)
	{
		
		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); 
		HAL_Delay(500);
		
		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_SET);	 
		HAL_Delay(500);
		
	}
}





