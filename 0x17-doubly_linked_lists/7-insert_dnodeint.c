#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: address of the head of the list.
 * @idx: index of the new node.
 * @n: data of the new node.
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *head;
	unsigned int i = 1;

	node = NULL;
	if (idx == 0)
		node = add_dnodeint(h, n);
	else
	{
		head = *h;
		if (head == NULL)
			return (NULL);

		for (i = 0; i < idx && head != NULL; i++)
			head = head->next;

		if (head != NULL && head->next == NULL)
		{
			node = add_dnodeint_end(h, n);
			head->next = node;
		}
		else
		{
			node = malloc(sizeof(dlistint_t));
			if (node == NULL)
				return (NULL);

			node->prev = head->prev;
			node->n = n;
			node->next = head;
			head = node->prev;
			head->next = node;
		}
	}

	return (node);
}
