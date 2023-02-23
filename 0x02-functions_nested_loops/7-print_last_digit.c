#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @i: parameter to be used
 *
 * Return: j
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (i < 0)
		j = -j;
	return (j);
}
