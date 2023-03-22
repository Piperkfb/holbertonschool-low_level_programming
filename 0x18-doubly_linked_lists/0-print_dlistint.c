#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: The linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int cnt = 0;

	while (h)
	{
		printf("%s", head->n);
		head = head->next;
		cnt++;
	}
	return (cnt);
}
