#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of a dlistint_t linked list
 * @head: The head of the dlistint_t
 *
 * Return: The sum of all the data or
 * 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
