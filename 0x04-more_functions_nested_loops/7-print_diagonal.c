#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 *
 * @n: parameter to be used
 *
 * Return: always 0
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0 ; i < n ; i++)
			_putchar(92);
		_putchar('\n')
	}
}
