#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a note in a lists
 * @head: pointer to the first element in the list
 * @index: index of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current = NULL;
	unsigned int p = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (p < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		p++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
