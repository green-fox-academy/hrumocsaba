/*
 * Hello_World.c
 *
 * Created: 2019. 11. 04. 15:07:45
 *  Author: HP
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>

void h(uint8_t * ON){
	dot(ON);
	dot(ON);
	dot(ON);
	dot(ON);
	
}

void e(uint8_t * ON){
	dot(ON);

}

void o(uint8_t * ON){
	slash(ON);
	slash(ON);
	slash(ON);

}

void l(uint8_t * ON){
	dot(ON);
	slash(ON);
	dot(ON);
	dot(ON);

}

void dot(uint8_t * ON){
	DDRB = 0b00001111;
	PORTB = 0b00001111;
	waspressed(ON);
	_delay_ms(150);
	DDRB = 0;
	PORTB = 0;
	waspressed(ON);
	_delay_ms(150);
}

void slash(uint8_t * ON){
	DDRB = 0b00001111;
	PORTB = 0b00001111;
	waspressed(ON);
	_delay_ms(450);
	DDRB = 0;
	PORTB = 0;
	waspressed(ON);
	_delay_ms(150);
}

void w(uint8_t * ON){
	dot(ON);
	slash(ON);
	slash(ON);
}
void r(uint8_t * ON){
	dot(ON);
	slash(ON);
	dot(ON);
}
void d(uint8_t * ON){
	slash(ON);
	dot(ON);
	dot(ON);
}

void hello_world(uint8_t* ON){
	h(ON);
	_delay_ms(3*150);
	e(ON);
	_delay_ms(3*150);
	l(ON);
	_delay_ms(3*150);
	l(ON);
	_delay_ms(3*150);
	o(ON);
	_delay_ms(7*150);
	w(ON);
	_delay_ms(3*150);
	r(ON);
	_delay_ms(3*150);
	l(ON);
	_delay_ms(3*150);
	d(ON);
	_delay_ms(7*150);
}
