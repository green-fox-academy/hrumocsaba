/*
 * knight.c
 *
 * Created: 2019. 11. 04. 16:47:58
 *  Author: HP
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>

void knight(){
		DDRB = 0b00000001;
		PORTB = 0b00000001;
	for (int i = 1; i < 4; i++)
	{
		DDRB =  1 << i;
		PORTB = 1 << i;
		_delay_ms(100);
	}
	for (int i = 1; i < 4; i++)
	{
		DDRB =  DDRB >> 1;
		PORTB = PORTB >> 1;
		_delay_ms(100);
	}
}

void changing()
{
	uint8_t flipped = 1;
		if(PINC & (1<<PINC3)){
			_delay_ms(200);
			flipped++;
		}
	if(flipped%2 == 0){
		_delay_ms(200);
		
		DDRB = 0b00000001;
		PORTB = 0b00000001;
		_delay_ms(150);
		for (int i = 1; i < 4; i++)
		{
			DDRB =  1 << i;
			PORTB = 1 << i;
			_delay_ms(150);
		}
	}else if (flipped%2 != 0){
		DDRB = 0b00001000;
		PORTB = 0b00001000;
		_delay_ms(150);
		for (int i = 1; i < 4; i++)
		{
			DDRB =  DDRB >> 1;
			if(PINC & (1<<PINC3)){
				_delay_ms(200);
				flipped++;
			}
			PORTB = PORTB >> 1;
			_delay_ms(150);
		}
		
	}
}
  


