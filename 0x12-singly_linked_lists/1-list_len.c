#include "lists.h"

/**
 * list_len - the number of elements in a linked list_t list.
 * @h: head of linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int num;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
