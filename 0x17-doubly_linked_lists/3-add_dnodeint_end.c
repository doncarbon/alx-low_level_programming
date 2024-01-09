#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of the llist.
 * @n: data of the new node.
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *h = NULL;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->next = NULL;
	temp->n = n;
	temp->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next)
			h = h->next;
	}

	temp->prev = h;
	if (h != NULL)
		h->next = temp;

	*head = temp;

	return (*head);
}
