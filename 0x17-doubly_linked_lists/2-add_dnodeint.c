#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head of the new node.
 * @n: data of the new node.
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *h = NULL;

	if (temp == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev)
			h = h->prev;
	}

	temp->next = h;
	if (h != NULL)
		h->prev = temp;

	*head = temp;

	return (temp);
}
