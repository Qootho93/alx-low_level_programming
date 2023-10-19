#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: pointer to list_t list
 * @str: input node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;
	return (new_node);
}
