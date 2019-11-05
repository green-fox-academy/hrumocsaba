
#include <avr/io.h>
#include <avr/interrupt.h>
#define F_CPU 16000000
#include <util/delay.h>

uint8_t button_was_pressed;
uint8_t counter = 0;
uint8_t cntr_max = 1;
ISR (PCINT2_vect)
{
	if(OCR0A < 10){
		OCR0A = 250;
	}
	counter++;
	if(counter > 0){
		counter=0;
		OCR0A-=25;
	}
	
}

ISR (TIMER0_OVF_vect)
{	
	counter++;
	if(counter > 10){
		counter=0;
		OCR0A-=10;
	}
	
	PORTB = 0b00001111;

}

ISR(TIMER0_COMPA_vect)
{
	
	PORTB = 0;
}



void interrupt1(){
		
		sei();
		PCICR = 1 << 2;
		PCMSK2 = 1 << 3;
}

void timer1(){
	
	OCR0A = 100;	
	TCCR0B = 0b00000101;
	sei();
	TIMSK0 |= 1 << 0;
	TIMSK0 |= 1 << 1;
		
}



int main(void)
{
	interrupt1();

	timer1();
	DDRB = 0b00001111;
	PORTB = 0;
	
 
    while (1) 
    {
		//PORTB = 0;
    }
}

