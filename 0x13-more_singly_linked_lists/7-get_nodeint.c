#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - retuns the nth node of linked list
 * @head: The linked list
 * @index: nth node
 * Return: The specified node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	if (head == NULL)
		return (NULL);

	for (cnt = 0; cnt < index; cnt++)
	{
		head = head->next;
	}

	if (head == NULL)
		return (NULL);

	return (head);
}
