#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,initialize with speific  * char
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	while (i < size)
	{

		s[i] = c;
		i++;
	}

	return (s);
}
