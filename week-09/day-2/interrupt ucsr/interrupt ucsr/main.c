#include <avr/io.h>			// This header contains the definitions for the io registers
#include <stdint.h>
#include <stdio.h>
#include <avr/interrupt.h>

#define F_CPU	16000000	// This definition tells to _delay_ms() that the CPU runs at 16MHz
#include <util/delay.h>		// This header contains the _delay_ms() function
char character;
char queue[16];
uint8_t inp_counter;
uint8_t head;
uint8_t tail;



void UART_Init() {
	// TODO:
	// Paste here your working function code
	UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0);
	UBRR0 = 103;
	sei();
}

void UART_SendCharacter(char character) {
	// TODO:
	// Paste here your working function code
	while ( !( UCSR0A & (1<<UDRE0)))
	;
	/* Put data into buffer, sends the data */
	UDR0 = character;
}

void USART_Flush( void )
{
	unsigned char dummy;
	while ( UCSR0A & (1<<RXC0) ) dummy = UDR0;
}
char UART_GetCharacter() {
	// TODO:
	// Paste here your working function code
	while ( !(UCSR0A & (1<<RXC0)) )
	;
	/* Get and return received data from buffer */
	return UDR0;
}

void ProcessorDoesSomethingElse(){
	// This function simulates a time-consuming task
	_delay_ms(500);
}

ISR(USART_RX_vect){
	inp_counter++;
	if (inp_counter <= 10){
		enqueue();
	}
	else{
		inp_counter = 0;
		dequeue();
		printf("\n");
	}
}

void enqueue(){
	queue[tail] = UART_GetCharacter();
	USART_Flush();
	tail++;
	if (queue[tail-1] == '\r')
	{
		tail--;
		inp_counter = 0;
		dequeue();
	}
}
void dequeue(){
	for (int i = 0; i < tail; i++ )
	{
		printf("%c",queue[i]);
	}
	//printf("\n");
	tail = 0;
	
}

int main(void) {
	char buffer[255];
	

	//Don't forget to call the init function :)
	UART_Init();

	// Setting up STDIO input and output buffer
	// You don't have to understand this!
	//----- START OF STDIO IO BUFFER SETUP
	FILE UART_output = FDEV_SETUP_STREAM(UART_SendCharacter, NULL, _FDEV_SETUP_WRITE);
	stdout = &UART_output;
	FILE UART_input = FDEV_SETUP_STREAM(NULL, UART_GetCharacter, _FDEV_SETUP_READ);
	stdin = &UART_input;
	//----- END OF STDIO IO BUFFER SETUP

	// Try printf
	printf("Startup...\r\n");

	// Loop that runs forever
	while (1) {
		// With gets and puts create a loopback, use the buffer variable!
		ProcessorDoesSomethingElse();
		
		
	}
}
