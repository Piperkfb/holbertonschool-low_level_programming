#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index of linked list
 * @head: linked list
 * @index: Position of deletion
 * Return: 1 at success, -1 at failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *new;
	dlistint_t *old;
	unsigned int cnt = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	
	while (cnt < index)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		new = temp->next;
		old = temp->prev;
		old->next = new;
		new->prev = old;
	}

	free(temp);

	return (1);
}
