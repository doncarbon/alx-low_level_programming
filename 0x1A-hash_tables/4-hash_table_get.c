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

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			if (ht->array[i]->value == NULL)
				return (NULL);
			return (ht->array[i]->value);
		}
	}

	return (NULL);
}
