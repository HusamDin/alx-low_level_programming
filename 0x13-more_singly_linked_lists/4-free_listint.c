#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: the first node pointing to all nodes to free
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
