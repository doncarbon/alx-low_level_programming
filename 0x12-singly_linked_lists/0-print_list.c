#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of the lists
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *element = h;
	unsigned int i, nodes = 0;

	if (element == NULL)
		printf("[0] (nil)");

	while (element != NULL)
	{
		printf("[%d] ", element->len);
		for (i = 0; i < element.len; i++)
			 printf("%s", element->str[i]);
		printf("\n");
		element = element->next;
		nodes++;
	}
	return (nodes);
}
