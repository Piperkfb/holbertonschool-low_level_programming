#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked list
 * @h: The head of the list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
