#include <stdio.h>
#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @index: is the index, starting from 0
 * @n: a pointer 
 *
 * Return: 1 is sucessful or -1 if an error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);

	return (1);
}
