#include "main.h"
#include <stdio.h>

/**
 * main - program that prints Fizz Buzz
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1 ; i < 100 ; i++)
	{
		if ((i % 3 == o) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
