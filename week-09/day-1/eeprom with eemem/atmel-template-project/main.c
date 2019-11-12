#include <avr/io.h>
#include <avr/eeprom.h>
#include <stdint.h>
#include <stdio.h>
#include <STDIO_lib.h>
#include <avr/interrupt.h>
#include <stdlib.h>
#include <util/delay.h>


// TODO:
/*
	1) Do the other TODOs first!
	2) Run the code
		You will notice that memory garbage is shown on the serial port
	3) Try to give default values to the variables (in global scope)
		You will notie that this did not help
	4) The compiler makes a special file that contains the default values of the EEPROM variable's,
		you have to load it to the MCU manually
		At first you have to switch the programmer back to ISP mode from debugWIRE.
		To do this you have to enter debugging mode, so hit the "F5" button on your keyboard,
		this will start a debugging process.
		While in debugging mode pause the program (by pressing "Ctrl+F5", or by Debug->Break all)
		If the program is paused click on Debug->Disable debugWIRE and close. This will stop debugging
		and reverts the programmer back to ISP mode.
		Now follow the following steps:
		- Tools->Device programming
		- Click on "Apply"
		- Click on "Memories" on the right
		- In the EEPROM field you should give the location of the .eep file
			- Click on the "Browse" button to open a file picker window
			- Search for a file in your project folder with the extension of .eep
		- After you found this file and browsed it click on the "Program" button
		- After the programming finished you can close the Device programming windows and
		rerun the program.
		- Now if you run your program the correct values will be shown
*/

// TODO:
// Create a 8bit, 16bit, 32bit wide unsigned interger variable in the EEPROM (using "EEMEM")
// Also create a float variable and also create an array which holds 6 8bit wide unsigned integers in the EEPROM
// Note that these can't be used as regular variables, but we can use them to get a pointer to them, which will point
// somewhere to a the EEPROM.

#define READ_FROM_EEPROM

uint8_t EEMEM myuint8_t;
uint16_t EEMEM myuint16_t;
uint32_t EEMEM myuint32_t;
float EEMEM myfloat_t;
uint8_t EEMEM myarray[6];

void init() {
    // Initialize the UART interface with 115200 baud/sec
    STDIO_init();
	sei();
	uint8_t temparray[6]={1,2,3,4,5};
	eeprom_update_byte((uint8_t*)&myuint8_t,8);
	eeprom_update_word((uint16_t*)&myuint16_t,16);
	eeprom_update_dword((uint8_t*)&myuint32_t,32);
	eeprom_update_float((float*)&myfloat_t,69.420);
	eeprom_update_block((void*)temparray,(const void*)myarray,sizeof(uint8_t)*6);

}

int main(void) {
	char buffer[32];
    // Don't forget to call the Init() function :)
    init();

    // Create variables in the SRAM
    uint8_t var_8bit;
    uint16_t var_16bit;
    uint32_t var_32bit;
    float var_float;
    uint8_t array[6];

    // TODO:
    // Load the values from the EEPROM to the SRAM variables!
    // Use the eeprom_read_xxxxx functions with th EEMEM variables as pointers.û
	var_8bit = eeprom_read_byte(&myuint8_t);
	var_16bit = eeprom_read_word(&myuint16_t);
	var_32bit = eeprom_read_dword(&myuint32_t);
	var_float = eeprom_read_float(&myfloat_t);
	eeprom_read_block((void*)array,&myarray,6*sizeof(uint8_t));

    // Print out the variables
    // printf can't print out floating point numbers (float) by deafault :(
    // Just don't care, it's okay
    printf("var_8bit\t%d\n", var_8bit);
    printf("var_16bit\t%d\n", var_16bit);
    printf("var_32bit\t%ld\n", var_32bit);
    printf("var_float\t%f\n", var_float);
    printf("array\t");
    for(uint8_t i = 0; i < sizeof(array); i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Infinite loop
    while (1) {
		gets(buffer);
		puts(buffer);

    }
}