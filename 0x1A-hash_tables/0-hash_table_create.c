#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the hash table.
 *
 * Return: a pointer to the newly created hash table or NULL if failed.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return table;
}
