#include "main.h"
/**
 * print_triangle - function that prints a triangle
 *
 * @size: parameter to be used
 *
 * Return: always 0
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = size - i ; j > 1 ; j--)
			{
				_putchar(32);
			}
			for (k = 0 ; <= i ; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
