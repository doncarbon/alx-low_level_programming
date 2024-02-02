#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: value associated with the element, or NULL if key couldnt be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i, index;

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			return (ht->array[i]->value);
	}

	return (NULL);
}
