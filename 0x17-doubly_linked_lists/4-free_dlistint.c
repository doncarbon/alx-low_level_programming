#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head of the list.
 *
 * Return: (always success)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev; 
	while (temp = head)
	{
		head = head->next;
		free(tmp);
	}
}
