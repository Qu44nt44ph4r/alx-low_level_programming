#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - executes a functiongiven as parameter
 *@array: pointer array
 *@size: size of array
 *@action: pointer to a function
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i <= size; i++)
		action(array[i]);

}
