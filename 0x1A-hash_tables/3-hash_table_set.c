#include "hash_tables.h"

/**
 * hash_table_set - adds an elements to a hash table
 * @ht: Hash table
 * @key: The element key
 * @value: value along side key
 * Return: 1 sucess, 0 other
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	unsigned long int i;
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			if (ht->array[i]->value == NULL)
				return (0);
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	if (new->key == NULL)
		return (0);

	new->value = strdup(value);
	if (new->value == NULL)
		return (0);

	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
