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


int main(void)
{
		
    /* Replace with your application code */
    while (1) 
    {
		while(!(PINB & (1<<PINB7))){
			DDRB = 1 << 5;
			PORTB = 1 << 5;
			_delay_ms(125);
			DDRB = 0 ^ 5;
			PORTB = 0 ^ 5;
			_delay_ms(125);
		}
		
		
		
		
		
    }
}

