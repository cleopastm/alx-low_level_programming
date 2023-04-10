#include <stdio.h>
#include "main.h"

/**
 * get_endianness -  a function that checks the endianness.
 *@c: a pointer to a character
 * Returns: 0 if big endian or 1 if litle endian
 */

int get_endianness(void)
{
	unsigned int a;
	char* c;

	a = 1;
	c = (char*) &a;

	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
