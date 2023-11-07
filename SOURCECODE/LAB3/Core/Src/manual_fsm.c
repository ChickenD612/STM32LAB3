/*
 * manual_fsm.c
 *
 *  Created on: Nov 7, 2023
 *      Author: ASUS
 */

#include <Manual_fsm.h>

void fsm_manual_run(){
	switch (status){
	case MODE2:
		status = RED;
		SCAN_7SEG2(2);
		break;
	case MODE3:
	        status = GREEN;
	        SCAN_7SEG2(3);
	        break;
	case MODE4:
	    	y = 3;
	    	status = YELLOW;
	    	SCAN_7SEG2(4);
	    	break;
	case RED:
		SCAN_7SEG2(2);
		if(timer4_flag == 1){
			setTimer4(500);
		}
		if(isButtonPressed(0) == 1){
         	status = MODE3;
		}
		if(isButtonPressed(1) == 1){
			status = ADJ_RED;
			if(x>=99){
				x=z+1;
			}
			else{
				x++;
			}
		}
		break;
    case ADJ_RED:
    	SCAN_7SEG2(2);
    	traffic_light(RED);
		if(timer4_flag == 1){
          setTimer4(50);
		}
		if (isButtonPressed(1) == 1) {
			if (x >= 99) x = z + 1;
			else x++ ;
			y = x - z;
			z = x - y;
		}
		updateClockBuffer(x,x);
		if (isButtonPressed(2) == 1) {
			status = MODE1;
		}
		break;
    case GREEN:
    	 SCAN_7SEG2(3);
    	 traffic_light(GREEN);
         if(timer4_flag == 1){
        	 setTimer4(50);
         }
    	 if(isButtonPressed(0) == 1){
    		 status = MODE4;
    	 }
    	 if(isButtonPressed(1)==1){
    		 status = ADJ_GREEN;
    		 if( y >= 99 ){
    			 y=1;
    		 }
    		 else y++;
    	 }
    	 break;
    case ADJ_GREEN:
    	 SCAN_7SEG2(3);
    	 traffic_light(GREEN);
    	 if(timer4_flag == 1){
    		 setTimer4(50);
    	 }
    	 if(isButtonPressed(1) == 1){
    		 if(y >= 99-z){
    			 y=1;
    		 }
    		 else y++;
    	 }
    	 updateClockBuffer(y, y);
    	 if(isButtonPressed(2)==1){
    		status = MODE1;
    		x = y + z;
    		z = x - y;
    	 }
    	 break;
    case YELLOW:
    	SCAN_7SEG2(4);
    	traffic_light(YELLOW);
    	if(timer4_flag == 1){
    		setTimer4(50);
    	}
    	if(isButtonPressed(0)==1){
    		status = MODE1;
    	}
    	if(isButtonPressed(1)== 1){
    		status = ADJ_YELLOW;
    		if(z >= 99-y){
    			z=1;
    		}
    		else z++;
    	}
    	break;
    case ADJ_YELLOW:
    	SCAN_7SEG2(4);
    	traffic_light(YELLOW);
    	if(isButtonPressed(1) == 1){
    		if(z>=99-y){
    			z=1;
    		}
    		else z++;
    	}
    	updateClockBuffer(z, z);
    	if(isButtonPressed(2)== 1){
    		status = MODE1;
    		x = y + z;
    	}
    	break;
    default:
    	break;
	}
}
