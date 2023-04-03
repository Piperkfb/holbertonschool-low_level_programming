#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees heap memory from linked list
 * @head: Head of the lsit
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
