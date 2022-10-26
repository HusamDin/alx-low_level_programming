#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to a node pointer
 * @idx: the index of the list where the new node should be added
 * @n: a data member in listint_t
 *
 * Return: ress of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nthNode = *head;
	listint_t *newNode = malloc(sizeof(listint_t));
	unsigned int num;

	if (newNode == NULL)
		return (NULL);

	for (num = 0; num < idx - 1 && nthNode != NULL; num++)
	{
		nthNode = nthNode->next;
	}

	if (idx != 0)
	{
		if (nthNode == NULL)
			return (NULL);
	}

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	newNode->next = nthNode->next;
	nthNode->next = newNode;

	return (newNode);
}
