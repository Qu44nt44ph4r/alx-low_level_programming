#include <stdio.h>
#include <stdlib.h> /*Required for atoi function*/
#include <ctype.h>

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int i;
	int j;

	if (argc != 3)
	{
		printf("Usage: %s <num1> <num2>\n", argv[0]);
		return (0); /*Exit with an error code*/
	}

	/*Check if both arguments are valid positive integers*/
	for (i = 1; i < argc; ++i)
	{
		for (j = 0; argv[i][j] != '\0'; ++j)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n"); /*Print "Error" & a new line if a non-digit symbol*/
				return (1); /*Exit with an error code*/
			}
		}
	}

	num1 = atoi(argv[1]); /*Convert the first argument to an integer*/
	num2 = atoi(argv[2]); /*Convert the second argument to an integer*/

	result = num1 + num2; /*Add the two numbers*/

	printf("%d\n", result); /*Print the result alone*/
	return (0);
}
