#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index from linked list
 * @head: The list
 * @index: position of target
 * Return: 1 success, -1 failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cnt;
	listint_t *temp;
	listint_t *dup;

	if (dup == NULL)
		return (-1);

	if (index == 0)
	{
		*head = *head->next;
		free(dup);
		return (1);
	}

	for (cnt = 0; cnt < (index - 1); cnt++)
	{
		if (dup->next == NULL)
			return (-1);

		dup = dup->next;
	}

	temp = dup->next;
	dup->next = temp->next;
	free(temp);

	return (1);

}
