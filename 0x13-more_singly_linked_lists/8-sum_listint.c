#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns sum of all data in a linked list
 * @head: linked list
 * Return: sumof all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
