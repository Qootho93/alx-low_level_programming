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
	size_t m = 0;

	while (h)
	{
		if  (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		m++;
	}
	return (m);
}
