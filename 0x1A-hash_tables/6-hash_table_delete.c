#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table to delete.
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht;
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (tmp != NULL)
			{
				tmp = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
			}
		}
	}

	free(h->array);
	free(h);
}
