#include "lists.h"

/**
 * print_dlistint - prints all elents of dlistint_t lists
 * @h: head of lists
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
