#include "lists.h"
#include <stddef.h>
/*
 * print_list - a function that prints all the elements of a linked list.
 * @h: a pionter to the list_t
 * return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
