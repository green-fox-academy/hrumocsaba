#include <avr/io.h>
#include <stdint.h>
#include <avr/interrupt.h>
#include "freq_meas.h"
uint16_t current_step_value;
uint16_t previous_step_value;
uint8_t overflows;
float herz;
double T;
float steps;

// TODO:
// Write the interrupt handlers
typedef enum{
	START,
	END
	} state_t;
state_t timer_state = START;

ISR(TIMER1_OVF_vect){
	overflows++;
}

ISR(TIMER1_CAPT_vect){
	if (timer_state == START){
		previous_step_value = ICR1;
		timer_state = END;
	}else{
		steps = (overflows * 65535) + ICR1 - previous_step_value;  
		timer_state = START;
	}
	overflows = 0;
}

void freq_meas_init()
{
	/**************
	 * TC1 CONFIG *
	 **************/
	// TODO:
	// Configure the TC1 timer properly :) 
	TCCR1B |= 1 << ICNC1;
	TCCR1B |= 1 << ICES1;
	TCCR1B |= 0b00000010;
	TIMSK1 |= 1 << ICIE1;
	TIMSK1 |= 1 << TOIE1;
}

// TODO:
// Write this function. It returns the measured frequency in Hz
float get_freq()
{
    T = 0.0000005 * steps;
	herz = 1/T;
	return herz;
}