#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the head pointer
 * @idx: the index of the list where the new node should be added
 * @n: a node data member
 *
 * Return: the address of the new node
 * or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num = 0;
	listint_t *nthNode = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL || head == NULL)
		return (NULL);

	while (num < idx - 1 && nthNode != NULL)
	{
		nthNode = nthNode->next;
		num++;
	}

	if (idx != 0)
	{
		if (nthNode == NULL)
			return (NULL);
	}
	if (idx == 0)
	{
		newNode->n = n;
		newNode->next = (*head);
		*head = newNode;
		return (newNode);
	}

	newNode->n = n;
	newNode->next = nthNode->next;
	nthNode->next = newNode;

	return (newNode);
}
