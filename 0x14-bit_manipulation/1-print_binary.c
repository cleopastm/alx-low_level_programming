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
	int c;
	int a;
	unsigned long int b;

	a = 0;

	for (c = 63; c >= 0; c--)
	{
		b = n >> c;
		if (b & 1)
		{
			_putchar('1');
			a++;
		}
		else if (a)
		{
			_putchar('0');
		}
	}
	if (!a)
	{
		_putchar('0');
	}
}
