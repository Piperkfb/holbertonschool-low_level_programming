#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of linked list
 * @head: Head of linked list
 * @n: The adding node content
 * Return: address to new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *last;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = node;
	}
	
	return (*head);
}
