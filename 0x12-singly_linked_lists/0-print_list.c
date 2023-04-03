#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints elemts of a list_t list
 * @h: The list_t
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	int cnt = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		cnt++;
		h = h->next;
	}
	return (cnt);
}
