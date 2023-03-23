#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - a function that  returns the sum of all its parameters
 *@n: variadic parameter
 *
 *Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int index;
	va_list all_parameters;

	sum = 0;

	va_start(all_parameters, n);

	for (index = 0; index < n; index++)
		sum += va_arg(all_parameters, int);

	va_end(all_parameters);
	return (sum);
}
