#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 * @head: the head of the linked list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	while (head)
	{
		sum += head->n;
	}

	return (sum);
}
