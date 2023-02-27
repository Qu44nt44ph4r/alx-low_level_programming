#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - function to check for positive or negative number
 *
 * @i: parameter to be used
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i == 0)
		printf("%d is zero", i);
	else
		printf("%d is negative", i);
	printf("\n");
}
