#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with given size
 * @size: The size
 * Return: pointer to created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int cnt = 0;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t) * size);
	if (array == NULL)
		return (NULL);

	for (cnt = 0; cnt < size; cnt++)
		array[cnt] = NULL;

	table->aray = array;
	table->size = size;

	return (table);
}
