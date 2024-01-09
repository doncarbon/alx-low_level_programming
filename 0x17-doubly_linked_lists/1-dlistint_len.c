#include "lists.h"

/**
 * dlistint_len - the number of elements in a linked dlistint_t list.
 * @h: head of the list
 *
 * Return: the length of the linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	if (h == NULL)
		return (len);

	while (h->prev != NULL)
		h = h->prev;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
