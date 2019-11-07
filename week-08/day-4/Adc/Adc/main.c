#include <avr/io.h>
#include <avr/interrupt.h>

uint8_t result_ADCL;
uint16_t result_ADCH;
volatile uint16_t sum;

ISR(ADC_vect){
	result_ADCL = ADCL;
	result_ADCH = ADCH << 8;
	sum = result_ADCH+result_ADCL;
}

void init(){
	ADMUX = 0;
	ADCSRA = 0b11101111;
	ADCSRB = 0b00000000;
}

void interrupt1(){
	
	sei();
	PCICR = 1 << 1;
	PCMSK1 = 1 << 0;
}

void pwm(){
	//DDRD = 1 << DDRD6;
	TCCR0B = 0b00000101;
	TCCR0A = 0b10000011;
	OCR0A = 0;
	
}

void set_duty(uint16_t _sum){
	OCR0A = (sum/4);
}


int main(void)
{
    /* Replace with your application code */
	init();
	interrupt1();
	pwm();
	DDRD = 1 << DDRD6;
    while (1) 
    {			
		set_duty(sum);	
    }
}

