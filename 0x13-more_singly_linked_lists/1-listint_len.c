#include "lists.h"
#include <stddef.h>

/*
 * list_len - returns the number of elements in a linked list.
 * @h: a pointer to the list_t list.
 *
 * return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("%u %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
