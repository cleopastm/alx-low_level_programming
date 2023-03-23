#include <stdio.h>
#include <stdarg.h>
#include  "variadic_functions.h"

/**
 *print_numbers -  function that prints numbers, followed by a new line
 *@separator: the string to be printed between numbers
 *@n: number of integers
 *
 *Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(ap, int));

	if (index != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
