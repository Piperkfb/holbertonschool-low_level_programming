#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: the linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int cnt = 0;

	while (h)
	{
		if (h->next == NULL)
		{	cnt++;
			return (cnt);
		}
		cnt++;
		h = h->next;
	}
	return (cnt);
}
