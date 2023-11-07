/*
 * Automatic_fsm.c
 *
 *  Created on: Nov 7, 2023
 *      Author: ASUS
 */


#include <automatic_fsm.h>

int a,b,c,x,y,z;

void fsm_automatic_run(){
	if(timer2_flag == 1){
		c++;
		setTimer2(15);
		if ( c > 3){
			c = 0;
		}
		update7SEG(c);
	}
	switch (status){
	case INIT:
		y = 3;
		z = 2;
		x = y+z;
		status = MODE1;
        break;
	case MODE1:
		SCAN_7SEG2(1);
		traffic_light(status);
		status = RED1_GREEN ;
        setTimer1(y*100);
        setTimer2(1);
        timer3_flag = 1;
        if (isButtonPressed(0) == 1){
        	status = MODE2;
        }
        break;
	case RED1_GREEN :
		SCAN_7SEG2(1);
		SEG7_1_run(x,y);
		traffic_light(status);
		if (timer1_flag == 1){
			status = RED1_YELLOW;
			setTimer1(z*100);
		}
        if(isButtonPressed(0)== 1){
        	status = MODE2;
        }
		break;
	case RED1_YELLOW:
		SCAN_7SEG2(1);
		SEG7_1_run(x,z);
		traffic_light(status);
		if (timer1_flag == 1){
			status = GREEN1_RED;
			setTimer1(y*100);
		}
        if(isButtonPressed(0)== 1){
        	status = MODE2;
        }
		break;
	case GREEN1_RED:
		SCAN_7SEG2(1);
		SEG7_1_run(y,y+z);
		traffic_light(status);
		if (timer1_flag == 1){
			status = YELLOW1_RED;
			setTimer1(z*100);
		}
        if(isButtonPressed(0)== 1){
        	status = MODE2;
        }
		break;
	case YELLOW1_RED:
		SCAN_7SEG2(1);
		SEG7_1_run(z,y+z);
		traffic_light(status);
		if (timer1_flag == 1){

			status = RED1_GREEN;
			setTimer1(y*100);
		}
        if(isButtonPressed(0)== 1){
        	status = MODE2;
        }
	default:
		break;
		}
	}
