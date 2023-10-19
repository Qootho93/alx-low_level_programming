#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: poointer to the first node
 * Return: number of nodes in the lists
 */
size_t print_list(const list_t *h)
{
	const list_t *curr = h;
	size_t nodes = 0;

	if (!h)
		return (0);
	while (curr)
	{
		if (curr->str)
			printf("[%d] %s\n", curr->len, curr->str);
		else
			printf("[0] (nill)\n");
		curr = curr->next;
		nodes++;
	}
	return (nodes);
}
