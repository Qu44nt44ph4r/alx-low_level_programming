#include <stdio.h>
#include <stdlib.h> /*Required for atoi function*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n"); /*Print "Error" & a new line if the no of args is not 1*/
		return (1); /*Exit with an error code*/
	}
	int cents = atoi(argv[1]); /*Convert the arg to an int*/

	if (cents < 0)
	{
		printf("0\n"); /*If the arg is negative, print 0 & a new line*/
	}
	else
	{
		int coins = 0; /*Initialize the count of coins to 0*/

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
			coins++; /*Increment the coin count for each coin used*/
		}
		printf("%d\n", coins); /*Print minimum number of coins & a new line*/
	}
	return (0); /*Exit successfully*/
}
