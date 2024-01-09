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

	if (*head == NULL)
	{
		temp->prev = NULL;
		temp->n = n;
		temp->next = NULL;
		*head = temp;
	}

	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	temp->next = *head;
	(*head)->prev = temp;
	*head = temp;

	return (*head);
}
