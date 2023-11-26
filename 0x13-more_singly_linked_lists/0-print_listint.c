#include "lists.h"
#include <stddef.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: a pointer to listint_t list.
 *
 * Return:  number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *temp;

	temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
