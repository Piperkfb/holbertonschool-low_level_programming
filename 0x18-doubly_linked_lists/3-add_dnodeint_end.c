#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the END of linked list
 * @head: The linked list
 * @n: The ammount needed
 * Return: pointer to new node location
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *old;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

/* Assign new's constant values */
	new->n = n;
	new->next = NULL;

/* If no head, add the first instance of node */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	else
	{
/* Go to end of list */
		old = *head;
		while (old->next != NULL)
			old = old->next;

/* Assign new's value and old head's values */
		old->next = new;
		new->prev = old;
	}
	return (new);
}
