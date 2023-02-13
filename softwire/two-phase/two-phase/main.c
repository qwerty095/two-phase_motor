/*
 * two-phase.c
 *
 * Created: 13.02.2023 18:35:06
 * Author : LENOVO
 */ 

#include <avr/io.h>

#define F_CPU 16000000

#define _BV(bit) (1 << (bit))
#define sbit(reg, bitmask) (reg |= _BV(bitmask))
#define cbit(reg, bitmask) (reg &= ~_BV(bitmask))
#define invbit(reg, bitmask) (reg ^= _BV(bitmask))

#define readbit(reg, bitmask) (reg & _BV(bitmask))


int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
    }
}

