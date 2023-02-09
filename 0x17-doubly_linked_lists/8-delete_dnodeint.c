#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at any index
 * @head: A pointer to the head pointer
 * @index: The index of the node that should be deleted
 *
 * Return: 1 if succeeded
 * Or -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = (*head);
	dlistint_t *aft_temp;
	dlistint_t *aft_aft_temp;
	unsigned int idx = 0;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && idx < index - 1)
	{
		temp = temp->next;
		idx++;
	}

	if (temp == NULL)
		return (-1);

	aft_temp = temp->next;
	aft_aft_temp = aft_temp->next;
	temp->next = aft_temp->next;
	aft_aft_temp->prev = temp;
	free(aft_temp);
	return (1);
}
