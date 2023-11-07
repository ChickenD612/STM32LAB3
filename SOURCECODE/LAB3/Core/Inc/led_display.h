/*
 * led_display.h
 *
 *  Created on: Nov 7, 2023
 *      Author: ASUS
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

#include"global.h"

void SCAN_7SEG1();
void SCAN_7SEG2();
void update7SEG();
void updateClockBuffer();
void button_led();
void SEG7_1_run();
void SEG7_2_run();

#endif /* INC_LED_DISPLAY_H_ */
