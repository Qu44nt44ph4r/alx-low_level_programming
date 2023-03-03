#include "main.h"

/**
 * _strcat - the function that contain  the two string
 * @dest: parameter function one
 * @src: parameter function two
 *
 * Return: return pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
