#include "lists.h"
#include <string.h>

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: Head of linked list
 * @n: the added node
 * Return: address of new elements
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	node->n = n;
	node->next = *head;
	*head = node;
	
	return (node);
}
