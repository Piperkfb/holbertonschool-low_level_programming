#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: The linked list
 * @index: The numerical position
 * Return: Location of specified node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt = 0;
	dlistint_t *temp = head;

	for (cnt = 0; cnt < index; cnt++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	return (temp);
}
