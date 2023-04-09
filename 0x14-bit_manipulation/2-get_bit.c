#include <stdio.h>
#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @index: is ythe number position of bits(index)
 * @n: is an unsigned long integer
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bit = 1UL << index;

	return ((n & bit) ? 1 : 0);
}
