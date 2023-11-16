#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of the lists
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i, nodes = 0;

	if (h == NULL)
		printf("[0] (nil)");

	while (h)
	{
		printf("[%d] ", h->len);
		for (i = 0; i < h->len; i++)
			printf("%c", h->str[i]);
		printf("\n");
		h = h->next;
		nodes++;
	}

	return (nodes);
}
