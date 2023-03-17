#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: The beginning of list
 * @str: The adding string
 *
 * Return: Address of new node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *newnode;
	list_t *last;
	char *dup;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(newnode);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	newnode->str = dup;
	newnode->len = len;
	newnode->next = NULL;;

	if (*head == NULL)
		*head = newnode;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newnode;
	}
	return (*head);
}
