#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: a pointer to head pointer to listint_t
 * @n: an integer in listint_t list
 *
 * Return: a pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
