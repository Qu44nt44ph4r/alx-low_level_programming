#include <stdio.h>
#include <stdlib.h> /*Required for atoi function*/

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description: This prog multiplies two nums provided as command-line args
 * and prints the result.
 *
 * Return: 0 if successful, 1 if there are not enough arguments provided.
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n"); /*Print "Error" & new line if <2 args are provided*/
		return (1); /*Exit with an error code*/
	}


	num1 = atoi(argv[1]); /*Convert the first argument to an integer*/
	num2 = atoi(argv[2]); /*Convert the second argument to an integer*/

	result = num1 * num2; /*Multiply the two numbers*/

	printf("%d\n", result); /*Print the result alone*/
	return (0);
}
