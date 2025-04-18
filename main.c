#define F_CPU 16000000UL
#include <avr/interrupt.h>
#include <avr/io.h>
#include <util/delay.h>
unsigned int i;



int main(void)
{

	DDRC = 0xFF;
	i = 0; // Initial duty cycle for 0% speed
	// Set PWM pin (OC1A) as output
	DDRB |= (1 << PB1);
	// Fast PWM mode, non-inverted output
	TCCR1A = (1 << COM1A1) | (1 << WGM10) | (1 << WGM11);
	// No prescaler
	TCCR1B = (1 << WGM12) | (1 << CS10);
	DDRD &= ~(1 << 2);
	PORTD |= (1 << 2);
	DDRD &= ~(1 << 2);
	PORTD |= (1 << 3);
	EICRA = (1 << ISC11) | (1 << ISC10);  // Falling edge of INT1 generates an interrupt request
	EIMSK = (1 << INT1) | (1 << INT0);   // Enable external interrupt INT1 and INT0

	sei();  // Enable global interrupts
	while (1)
	{
		OCR1A = i; // Set PWM duty cycle
	}
	return 0;
}

ISR(INT0_vect)
{

	i += 50; // Increase duty cycle for higher speed
}
ISR(INT1_vect)
{

	i -= 50; // Increase duty cycle for higher speed
}

