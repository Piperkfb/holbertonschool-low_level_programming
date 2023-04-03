#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint- prints all elements
 * @h: the continuous list
 *
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	int cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cnt++;
		h = h->next;
	}
	return (cnt);
}
