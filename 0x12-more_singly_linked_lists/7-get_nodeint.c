#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - fetches the nth node of a listint_t linked list
 * @head: pointer to listint_t linked list
 * @index: nth node to retrieve
 *
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count = 0;

	node = head;
	while (node)
	{
		if (count == index)
			return (node);
		node = node->next;
		count++;
	}
	return (NULL);
}
