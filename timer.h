#ifndef TIMER_H 
#define TIMER_H 





/**********Register Difnations *********/

#define TCCR0  (volatile u8*)(0x53)
#define TCNT0   (volatile u8*)(0x54)
#define OCR0    (volatile u8*)(0x5C)  
#define TIMSK   (volatile u8*)(0x59) 


/***************Function Defination **************/
 void TIMER_init () ; 
 void TIMER_start () ; 
 void TIMER_stop () ; 
 void TIMER_set  (u8 time) ; 
 u8 TIMER_get()  ;  










#endif 