#include <avr/io.h>
//#include <util/delay.h>
#include "atraso.h"

//#define F_CPU 16000000UL

#define LED PB5

int main( void )
{
  DDRB = 0xFF;
  while( 1 )
  {
    PORTB ^= 0xFF;
    //_delay_ms(100);
    atraso(1);
  }
}

