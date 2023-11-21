#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of the linked list
 * @index: index of the node, starting at 0
 *
 * Return: the nnth node of the linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node = NULL;

	while (head && count != index)
	{
		count++;
		head = head->next;
		node = head;
	}

	if (node == NULL)
		return (NULL);

	return (node);
}
