//
// Created by lhy on 5/7/24.
//
#include "stm32f4xx_hal.h"
#include "tim.h"

#include "LCD.h"
extern LCD lcd;
extern int num;
int z;
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
    if (htim==&htim2){
        z=num;
        num=0;
    }


}