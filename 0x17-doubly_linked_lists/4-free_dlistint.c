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

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->prev = NULL;
	temp->n = 0;
	temp->next = NULL;

	while (head)
	{
		head = head->next;
		head = *temp;
	}
}
