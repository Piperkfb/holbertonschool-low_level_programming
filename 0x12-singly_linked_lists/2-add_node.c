#include "lists.h"
#include <string.h>
/**
 * add_node - Adds a new node at beginning of list
 * @head: Head oflist
 * @str: The duplicated new node
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	char *node;
	char *dup;
	
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
		return (NULL);
	for (len = 0; str[len];)
		len++;

	node->str = dup;
	node->len = len;
	node->next = *head;

	return (node);
}
