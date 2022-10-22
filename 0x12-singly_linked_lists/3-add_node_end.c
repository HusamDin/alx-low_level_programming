#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to head pointer
 * @str: a string member
 *
 * Return: a pointer to list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last = *head;
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = newNode;

	return (newNode);
}
