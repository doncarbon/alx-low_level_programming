#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of the linked list
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int ndata;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	ndata = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (ndata);
}
