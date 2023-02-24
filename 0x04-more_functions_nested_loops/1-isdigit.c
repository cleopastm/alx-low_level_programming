#include "main.h"

/**
 * _isdigit - checks for digits
 * @x: the character to be checked
 * Return: 1 for a digit or else 0
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
