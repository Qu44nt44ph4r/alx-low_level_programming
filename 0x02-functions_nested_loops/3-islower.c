#include "main.h"
/**
 * _islower - function that checks lowercase character
 *
 * @c: parametre to be printed
 *
 * Return: 1 if a lowercase
 * and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
