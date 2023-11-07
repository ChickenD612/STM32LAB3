/*
 * input_reading.h
 *
 *  Created on: Nov 6, 2023
 *      Author: Acer
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_

#include "global.h"

#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int button1_flag;

void getKeyInput();



#endif /* INC_INPUT_READING_H_ */
