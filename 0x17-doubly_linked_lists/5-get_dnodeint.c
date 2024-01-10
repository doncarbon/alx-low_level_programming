#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the linked list.
 * @index: index of the wanted node.
 *
 * Return: the nth node of a dlistint_t or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	node = head;
	if (node == NULL)
		return (NULL);

	if (node != NULL)
		while (node->prev != NULL)
			node = node->prev;

	for (i = 0; i < index && node != NULL; i++)
		node = node->next;

	return (node);
}
