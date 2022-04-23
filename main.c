#include <avr/io.h>
#include <avr/interrupt.h>

// goal is to flip LED every second;

#define F_CPU 16000000

ISR (TIMER1_OVF_vect)
{
	PORTB ^= _BV(PORTB5);
	TCNT1 = 65535 - (F_CPU/1024);
}

int main (void) {
	

}