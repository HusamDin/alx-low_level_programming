#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the head pointer
 * @n: The data to be inserted in the new node
 *
 * Return: A pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;

	new_head = malloc(sizeof(dlistint_t));

	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->prev = NULL;
	new_head->next = (*head);
	(*head)->prev = new_head;
	(*head) = new_head;

	return (new_head);

}
