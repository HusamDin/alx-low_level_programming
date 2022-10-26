#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at an index of a linked list
 * @head: a pointer to a listint_t pointer
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *tmp;

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	while (n < index && *head != NULL)
	{
		*head = (*head)->next;
		n++;
	}
	if (*head == NULL)
		return (-1);
	else
	{
		free(*head);
		return (1);
	}
}
