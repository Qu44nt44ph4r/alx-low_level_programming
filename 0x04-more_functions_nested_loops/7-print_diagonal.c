#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: parameter to be used
 *
 * Return: always 0
 */

void print_diagonal(int n)
{
	int i;
	int j;
	int n = 4;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < i ; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
