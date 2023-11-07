/*
 * global.h
 *
 *  Created on: Nov 6, 2023
 *      Author: Acer
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "led_display.h"
#include "traffic_light.h"
#include "input_reading.h"
#include "fsm_automatic.h"
#include "input_reading.h"

#define INIT 1
#define RED1_GREEN 2
#define RED1_YELLOW  3
#define GREEN1_RED 4
#define YELLOW1_RED 5
#define RED 6
#define GREEN 7
#define YELLOW 8
#define MODE1  9
#define MODE2 10
#define MODE3 11
#define MODE4 12
#define ADJ_RED 13
#define ADJ_GREEN 14
#define ADJ_YELLOW 15


int digit1 ;
int digit2 ;
int digit3 ;
int digit4 ;
int led_buffer[4] ;


int reading_value[3];

#define  NO_OF_BUTTONS  3

#define DURATION_FOR_AUTO_INCREASING  100
#define button_is_pressed        GPIO_PIN_RESET
#define button_is_realeased      GPIO_PIN_SET

uint8_t index;

static GPIO_PinState buttonBuffer[NO_OF_BUTTONS];

static GPIO_PinState debounceButtonBuffer1[NO_OF_BUTTONS];
static GPIO_PinState debounceButtonBuffer2[NO_OF_BUTTONS];

static uint8_t flagForButtonPress1s[NO_OF_BUTTONS];

static uint16_t counterForButtonPress1s[NO_OF_BUTTONS];

extern int status ;
extern int a;
extern int b;
extern int c;

extern int y;
extern int z;
extern int x;



#endif /* INC_GLOBAL_H_ */
