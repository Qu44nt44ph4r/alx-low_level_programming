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
	int n = 0;
	const listint_t *next = h;

	if (h == NULL)
		return (0);

	while (next != NULL)
	{
		printf("%d\n", next->n);
		next = next->next;
		n++;
	}
	return (n);
}
