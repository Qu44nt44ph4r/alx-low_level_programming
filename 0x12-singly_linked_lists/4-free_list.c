#include <stddef.h>
#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: a pointer
 *
 * return: void
 */

void free_list(list_t *head)
{
	list_t *new_node, *temp;

	new_node = head;
	while (new_node != NULL)
	{
		temp = new_node->next;
		free(new_node->str);
		free(new_node);
		new_node = temp;
	}
}
