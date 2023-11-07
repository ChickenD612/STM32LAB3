/*
 * led_display.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Acer
 */
#include "led_display.h"


void updateClockBuffer(a,b){
	digit1 = a/10;
	digit2 = a%10;
	digit3 = b/10;
	digit4 = b%10;
	led_buffer[0] = digit1;
	led_buffer[1] = digit2;
	led_buffer[2] = digit3;
	led_buffer[3] = digit4;
}

void SCAN1(int n){
	switch (n){
	   case 0:
	  		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, 0 );
	  		HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, 0);
	  		HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, 0);
	  		HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin,0 );
	  		HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin,0 );
	  		HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, 0);
	  		HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, 1);
	  		break;

	   case 1:
	  		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, 1 );
	  		HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, 0);
	  		HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, 0);
	  		HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin,1 );
	  		HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin,1 );
	  		HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, 1);
	  		HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, 1);
	  		break;

	   case 2:
	  		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, 0 );
	  		HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, 0);
	  		HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, 1);
	  		HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin,0 );
	  		HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin,0 );
	  		HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, 1);
	  		HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, 0);
	  		break;

	   case 3:
	  		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, 0 );
	  		HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, 0);
	  		HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, 0);
	  		HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin,0 );
	  		HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin,1 );
	  		HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, 1);
	  		HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, 0);
	  		break;

	   case 4:
	  		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, 1 );
	  		HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, 0);
	  		HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, 0);
	  		HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin,1 );
	  		HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin,1 );
	  		HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, 0);
	  		HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, 0);
	  		break;
	   default:
		   break;
	}
}
void SCAN(int n){
	switch (led_buffer[n]){
	   case 0:
	  		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0 );
	  		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
	  		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
	  		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin,0 );
	  		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin,0 );
	  		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
	  		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);
	  		break;

	   case 1:
	 		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 1);
	 		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
	 		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
	 		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1);
	 		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
	 		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
	 		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);
	 		break;
	   case 2:
	 		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
	 		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
	 		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 1);
	 		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
	 		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
	 		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
	 		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
	 		break;
	   case 3:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
	   case 4:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 1 );
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0 );
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1 );
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
	   case 5:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0 );
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 1 );
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0 );
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1 );
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
	   case 6:

			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0 );
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 1 );
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin,0 );
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin,0 );
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
	   case 7:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0 );
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0 );
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1 );
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1 );
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);
			break;
	   case 8:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0 );
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0 );
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin,0 );
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin,0 );
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
	   case 9:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0 );
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0 );
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin,0 );
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
	   default:
		   break;
	}
}

void update7SEG(int index_led){
	switch (index_led){
	case 0:
		   HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
		   HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		   HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
		   HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
		   SCAN(index_led);
		   break;
	case 1:
		   HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
		   HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
		   HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
		   HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
		   SCAN(index_led);
		   break;
	case 2:
		   HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
		   HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		   HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
		   HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
		   SCAN(index_led);
		   break;
	case 3:
		   HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
		   HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		   HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
		   HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0 );
		   SCAN(index_led);
		   break;
	default:
		break;
	}
}
void reset_buffer(){a=0;b=0;}
void SEVled_run(int n ,int m){
	if(timer3_flag == 1){
		a--;b--;
		setTimer3(90);
		if(a <= 0){a = n;}
        if (b <= 0){b = m;}
        updateClockBuffer(a,b);
	}

}
void SEVled_run1(int n ,int m){
	if(timer3_flag == 1){
		setTimer3(90);
        updateClockBuffer(a,b);
	}

}




