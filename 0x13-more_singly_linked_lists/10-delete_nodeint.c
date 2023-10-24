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
	listint_t *current;
	unsigned int i;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && temp != NULL && index != 0; i++)
		temp = head->next;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		current = temp->next;
		free(temp);
		*head = current;
	}
	else
	{
		if (temp->next == NULL)
			current = temp->next;
		else
			current = temp->next->next;
		free(temp->next);
		temp->next = current;
	}
	return (1);
}
