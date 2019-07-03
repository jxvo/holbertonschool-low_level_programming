#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a doubly linked list
 * @head: pointer to head node
 * @index: nth node to fetch, starting at 0
 *
 * Return: pointer to nth node, NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int idx = 0;

	while (node && idx <= index)
	{
		if (idx == index)
			return (node);
		node = node->next;
		idx++;
	}
	return (NULL);
}
