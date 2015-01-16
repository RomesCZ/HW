#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRB = 0xFF;
	//DDRB |= 1<<PB0;
    DDRD = 0xFF;
    DDRA = 0xFF;
    while(1) {
    	//PORTB &= ~(1<<PB0); /* LED on */
    	//PORTB &= ~(1<<PB1);
    	PORTD = 80;
    	PORTB = 0;
    	//PORTD &= ~(1<<PD4);
		_delay_ms(1000);
		//PORTB |= 1<<PB0; /* LED off */
		//PORTD |= 1<<PD4;
		PORTD = 88;
		PORTB = 1;
		_delay_ms(1000);
		PORTD = 92;
		PORTB = 3;
		_delay_ms(1000);
		PORTA = 1;
		PORTB = 7;
		_delay_ms(1000);
		PORTA = 3;
		PORTB = 15;
		_delay_ms(1000);
		PORTD = 94;
		PORTB = 31;
		_delay_ms(1000);
		PORTD = 95;
		PORTB = 63;
		_delay_ms(1000);
		PORTD = 0;
		PORTB = 0;
		PORTA = 0;
		_delay_ms(1000);
    }
    return 0;
}
