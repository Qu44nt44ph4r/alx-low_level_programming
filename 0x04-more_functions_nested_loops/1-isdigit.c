#include "main.h"

/**
 * _isdigit - function that checks for a digit from 0 to 9
 *
 * @c: parameter to be used
 *
 * Return: 1 if c is a digit
 * and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
