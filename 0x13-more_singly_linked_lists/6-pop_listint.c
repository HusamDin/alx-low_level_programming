#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n)
 * @head: a pointer to the head pointer
 *
 * Return: the data of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;

	*head = (*head)->next;
	return (tmp->n);
	free(tmp);
}
