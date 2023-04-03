#include "lists.h"

/**
 * dlistint_len - returns the number of elements in list
 * @h: The linked list
 * Return: The number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
