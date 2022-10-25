#include <stdlib.h>
#include "lists.h"
/**
 * freelist_int - frees a listint_t list
 * @head: the first node pointing to all nodes to free
 *
 * Return: void
 */
void freelist_int(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
