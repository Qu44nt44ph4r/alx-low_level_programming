#include "lists.h"
#include <stddef.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: a pointer to listint_t list.
 *
 * Return: integer.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		counter++;
		temp = temp->next;
	}
	return (counter);
}
