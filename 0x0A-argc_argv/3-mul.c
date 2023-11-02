#include <stdio.h>
#include <stdlib.h> /*Required for atoi function*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n"); /*Print "Error" & new line if <2 args are provided*/
		return (1); /*Exit with an error code*/
	}


	int num1 = atoi(argv[1]); /*Convert the first argument to an integer*/
	int num2 = atoi(argv[2]); /*Convert the second argument to an integer*/

	int result = num1 * num2; /*Multiply the two numbers*/

	printf("%d\n", result); /*Print the result alone*/
	return (0);
}
