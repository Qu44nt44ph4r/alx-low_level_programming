#include <stdio.h>
#include <stdlib.h> /*Required for atoi function*/
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * return: 0 if successful, error if not 1 and 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int cents, ncoins = 0;
	if (argc == 1 || argc > 2)

	{
		printf("Error\n"); /*Print "Error" & a new line if the no of args is not 1*/
		return (1); /*Exit with an error code*/
	}
	cents = atoi(argv[1]); /*Convert the arg to an int*/
	if (cents < 0)
	{
		printf("0\n"); /*If the arg is negative, print 0 & a new line*/
	}
	/*Calculate the minimum number of coins*/
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		ncoins += 1;
	}
	printf("%d\n", ncoins); /*Print minimum number of coins & a new line*/
	return (0); /*Exit successfully*/
}
