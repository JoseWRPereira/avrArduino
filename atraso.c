#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 16000000UL

void atraso( int t )
{
  while( t )
  {
    _delay_ms( 1000 );
    --t;
  }
}

