#include "lists.h"

/**
 * print_dlistint_backward - prints all elements o list backwards
 * @h: The linked list
 * Return: Number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	int cnt, idx = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		cnt++;
		h = h->next;
	}
	cnt++;

	for (; idx < cnt; idx++)
	{
		printf("%d\n", h->n);
		h = h->prev;
	}

	return (cnt);
}
