#include <stddef.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int lenght = 0;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == 0)
		return (NULL);
	while (str[lenght])
		lenght++;

	new_node->str = strdup(str);
	new_node->len = lenght;
	new_node->next = *head;

	return (new_node);
}
