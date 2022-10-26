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
	listint_t *tmp, *nthNode = *head;
	unsigned int n;

	if (index != 0)
	{
		if (nthNode == NULL)
			return (-1);
	}

	if (index == 0)
	{
		if (nthNode != NULL)
		{
			tmp = nthNode;
			*head = (*head)->next;
			free(tmp);
			return (1);
		}
		return (-1);
	}

	for (n = 0; n < index -1 && nthNode != NULL; n++)
		nthNode = nthNode->next;

	if (nthNode == NULL)
		return (-1);

	tmp = nthNode->next;
	nthNode->next = tmp->next;
	free(tmp);

	return (1);
}
