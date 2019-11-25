#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>
#include <avr/interrupt.h>
uint8_t state = 1;
uint8_t counter = 0;
uint8_t dimming_counter = 0;
ISR(TIMER0_COMPA_vect){
	PORTB^= 1 << 5;
}
ISR(TIMER0_OVF_vect){
	dimming_counter++;
	if (counter>0)
	{
		counter++;
		if (counter>50)
		{
			state^=1;
			counter=0;	
		}
	}
	
	PORTB^= 1 << 5;
	
}
ISR(PCINT0_vect){
	counter++;
	dimming_counter = 0;

}

void timer(){
	//DDRD = 1 << DDRD6;
	TCCR0B = 0b00000101;
	TCCR0A = 0b10000011;
	TIMSK0 = 3;
	OCR0A = 250;
	
}

void dim_up(){
	
	if (dimming_counter>1 && OCR0A<255)
	{
		
		OCR0A+=5;
		dimming_counter=0;
		DDRB=1<<5;
		
		
		
	}
}

void dim_down(){
	if (dimming_counter>1 && OCR0A>9)
	{
		OCR0A-=5;
		dimming_counter=0;
		
	}else if (OCR0A<10)
	{
		DDRB = 0;
	}
}




void interrupt1(){
	
	sei();
	PCICR = 1 << 0;
	PCMSK0 = 1 << 7;
}

void output_pwm(){
	
}

int main(void)
{
	DDRB = 1<<5;
	timer();
	interrupt1();
	
	/* Replace with your application code */
	while (1)
	{
		if (state == 0)
		{
			dim_down();
		}else if (state==1)
		{
			dim_up();
		}
		
		
		
	}
}