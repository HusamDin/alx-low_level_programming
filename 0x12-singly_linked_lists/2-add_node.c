#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to the head node pointer
 * @str: a node string
 *
 * Return: pointer to a new node if successful
 * or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = (*head);
	(*head) = newNode;
	return (newNode);
}
