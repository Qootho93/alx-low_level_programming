#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints elements in a list
 * @head: linst int structure
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes;
	const listint_t *tortoise = head, *hare = head;

	if (head == NULL)
		exit(98);

	while (tortoise && hare && hare->next && head)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	head = NULL;
	return (nodes);
}
