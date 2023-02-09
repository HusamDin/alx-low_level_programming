#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: The head node of the list
 * @index: The index of the node, starting from 0
 *
 * Return: the nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth_node = head;
	unsigned int n = 0;

	while (n < index && nth_node != NULL)
	{
		nth_node = nth_node->next;
		n++;
	}

	if (nth_node == NULL)
		return (NULL);

	return (nth_node);
}
