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

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	node->prev = head->prev;
	node->n = head->n;
	node->next = head->next;

	return (node);
}
