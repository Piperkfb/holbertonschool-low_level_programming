#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: The linked list
 * @idx: The given position
 * @n: the data to be added
 * Return: Memory of new addition
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cnt = 0;
	listint_t *insert;
	listint_t *dup = *head;

	insert = malloc(sizeof(listint_t));
	if (insert == NULL)
		return (NULL);

	insert->n = n;

	if (idx == 0)
	{
		insert->next = dup;
		*head = insert;
		return (insert);
	}

	for (cnt = 0; cnt < (idx - 1); cnt++)
	{
		if (dup == NULL || dup->next == NULL)
			return (NULL);

		dup = dup->next;
	}

	insert->next = dup->next;

	dup->next = insert;

	return (insert);
}
