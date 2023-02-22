#include "main.h"
/**
 * _abs - a function that computes absolute value
 *
 * @e: parameter to be used
 *
 * Return: always e
 */

int _abs(int e)
{
	if (e < 0)
		e = -(e);
	else if (e >= 0)
		e = e;
	return (e);
}
