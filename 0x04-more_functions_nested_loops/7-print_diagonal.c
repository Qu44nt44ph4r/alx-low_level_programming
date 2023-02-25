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

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			for (i = 0 ; i < n ; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
		_putchar('\n');
}
