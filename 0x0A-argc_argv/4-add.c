#include <stdio.h>
#include <stdlib.h> /*Required for atoi function*/
#include <ctype.h>

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Usage: %s <num1> <num2>\n", argv[0]);
		return (0); /*Exit with an error code*/
	}

	/*Check if both arguments are valid positive integers*/
	for (int i = 1; i < argc; ++i)
	{
		for (int j = 0; argv[i][j] != '\0'; ++j)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n"); /*Print "Error" & a new line if a non-digit symbol*/
				return (1); /*Exit with an error code*/
			}
		}
	}

	int num1 = atoi(argv[1]); /*Convert the first argument to an integer*/
	int num2 = atoi(argv[2]); /*Convert the second argument to an integer*/

	int result = num1 + num2; /*Add the two numbers*/

	printf("%d\n", result); /*Print the result alone*/
	return (0);
}
