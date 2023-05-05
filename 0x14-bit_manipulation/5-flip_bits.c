#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 *  to flip to get from one number to another.
 *  @n: holds an integer
 *  @m: holds an integer
 *
 *  Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c;
	unsigned long int b;

	b = n ^ m;
	c = 0;

	while (b != 0)
	{
		c += b & 1;
		b >>= 1;
	}
	return (c);
}
