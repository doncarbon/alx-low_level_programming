#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: address of the head of the list.
 * @idx: index of the new node.
 * @n: data of the new node.
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *head;
	unsigned int i = 0;

	head = *h;
	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	for (i = 0; i < idx && head != NULL; i++)
		head = head->next;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->prev = head->prev;
	node->n = n;
	node->next = head;
	head = node;

	return (node);
}
