#include "timer.h" 

/* assuming our system run on 16MHz  

our prescaler value is 1024  
we need a  3 overflow to reach the target 
*/


int flag = 0 ; 
ISR(TIMER1_CTC_vect)
	{
	    TOG_led() ; 

	}

void main () 

{
	Timer_init() ; 
/*enable the general interrupt*/ 

TIMER_set(876) ; 

led_init() ; 	
	
	while(1) {} ; 
	
	
	
	
	
	
} 