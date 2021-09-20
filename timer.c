

#include "timer.h" 

void TIMER_init () 
{
TCCR0 = 0b01001100 ; /*compare mode  no prescaler*/ 
TCCR1B  0b00011000 ; 
TCNR0 = 0 ;  
OCR0  = 0 ; 
SET_BIT(TIMSK , 4 ) ; /*enable the OC interrupt*/

}
 void TIMER_start () 
 {
TCCR1B  0b00011001 ;  /*compare mode  prescaler*/ 
 
 } 
 void TIMER_stop () 
 { 
TCCR1B  0 ; /*set prescaler to zero */  
TCNR0 = 0 ;  
OCR0  = 0 ; 
 
 } 
 void TIMER_set  (u16 time)  
 {
 
OCR1AH  =  = time>>8 ;
OCR1AH  =  = (u8)time ;  
 
 } 
 int  TIMER_get()  
{
 return TCNR0 ; 

} 

