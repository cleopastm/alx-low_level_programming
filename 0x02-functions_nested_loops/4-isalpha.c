#include "main.h"

/**
 * _isalpha - check for alphabets
 * @c: character to be checked
 *
 * Return:1ifchar is a lettter, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
