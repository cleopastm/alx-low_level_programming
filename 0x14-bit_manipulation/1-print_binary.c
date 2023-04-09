#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: the variable that takes the unsigned  int number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int a;
	unsigned long int b = 1UL << (sizeof(unsigned long int) * 8 - 1);
	unsigned int c = (unsigned int) sizeof(unsigned long int ) * 8;

	for ( a = 0; a < c; a++)
	{
		if (n & b)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		b >>= 1;
	}
}
