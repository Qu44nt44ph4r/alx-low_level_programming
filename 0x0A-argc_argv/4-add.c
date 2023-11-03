#include <stdio.h>
#include <stdlib.h> /* Required for atoi function */
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description: This program adds positive numbers provided as
 * command-line arguments and prints the result.
 *
 * Return: 0 if successful, 1 otherwise and error if not digit.
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int add = 0; /* Initialize add to 0 */

	/* Check if both arguments are valid positive integers */
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n"); /* Print "Error" & a new line if a non-digit symbol */
				return (1); /* Exit with an error code */
			}
		}
		add += atoi(argv[i]); /* Add the numbers */
	}
	printf("%d\n", add); /* Print the result alone */

	return (0);
}
