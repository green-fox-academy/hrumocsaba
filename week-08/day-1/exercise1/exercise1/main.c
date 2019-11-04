/*
 * exercise1.c
 *
 * Created: 2019. 11. 04. 10:26:16
 * Author : HP
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
void short_ping(){
	DDRB = 1 << 5;
	PORTB = 1 << 5;
	_delay_ms(125);
	DDRB = 0 ^ 5;
	PORTB = 0 ^ 5;
	_delay_ms(125);
}
void long_ping(){
	DDRB = 1 << 5;
	PORTB = 1 << 5;
	_delay_ms(250);
	DDRB = 0 ^ 5;
	PORTB = 0 ^ 5;
	_delay_ms(250);
}
void sos(){
		short_ping();
		short_ping();
		short_ping();
		_delay_ms(200);
		long_ping();
		long_ping();
		_delay_ms(200);
		short_ping();
		short_ping();
		short_ping();
		_delay_ms(400);
	
}


int main(void)
{
	uint8_t waspressed = 1;		
    /* Replace with your application code */
    while (1) 
    {
		if(!(PINB & (1<<PINB7))){
			_delay_ms(200);
			waspressed++;
			if(waspressed%2 == 0){
			
							
			}else{
				DDRB = 0 << 5;
				PORTB = 0 << 5;
			}
		}
			
    }
}

