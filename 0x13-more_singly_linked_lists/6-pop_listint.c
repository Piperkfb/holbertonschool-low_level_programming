#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: The linked list
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (data);

}
