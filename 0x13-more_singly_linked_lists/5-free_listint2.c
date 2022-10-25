#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to the head pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		if (head == NULL)
			return;
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
