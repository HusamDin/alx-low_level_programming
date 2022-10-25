#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a listint_t node
 * @index: the node's index
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nthNode = head;
	unsigned int n = 0;

	while (n < index)
	{
		if (nthNode != NULL)
		{
			nthNode = nthNode->next;
			n++;
		}
		else
			return (0);
	}
	return (nthNode);
}
