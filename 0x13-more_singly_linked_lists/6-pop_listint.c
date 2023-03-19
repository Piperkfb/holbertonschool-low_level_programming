#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: The linked list
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	*head = (*head)->next;

	return (data);

}
