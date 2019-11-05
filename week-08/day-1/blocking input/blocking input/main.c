/*
 * blocking input.c
 *
 * Created: 2019. 11. 04. 13:34:19
 * Author : HP
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>



void waspressed(uint8_t * ON){
	if(!(PINB & (1 << 7))){
		_delay_ms(200);
		(*ON)++;
	}
}
void flash(uint8_t *ON){
		DDRB = 1 << 5;
		waspressed(ON);
		PORTB = 1 << 5;
		waspressed(ON);
		_delay_ms(40);
		DDRB = 0;
		waspressed(ON);
		PORTB = 0;
		waspressed(ON);
		_delay_ms(40);
	
}


int main(void)
{
	
	uint8_t ON = 1;
    /* Replace with your application code */
    while (1) 
    {
	
			knight();
	
		
		
	}
}

