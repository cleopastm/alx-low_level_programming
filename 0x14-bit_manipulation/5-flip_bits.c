#include <stdio.h>
#include "main.h"

/**
 * int flip_bits - a function that returns the number of bits you would need 
 *  to flip to get from one number to another.
 *  @n: holds an integer
 *  @
 *
 *  Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	int c;
	unsigned long int b = n^m;

	for (a = 63; a >= 0; a++)
	{
		c = b >> a;
		if (c & 1)
			c++;
	}
	return (c);
}
