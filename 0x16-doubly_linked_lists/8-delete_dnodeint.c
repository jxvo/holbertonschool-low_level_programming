#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the nth node of a doubly linked list
 * @head: double pointer to head node
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int idx = 0;

	if (head == NULL)
		return (-1);
	while (node && idx <= index)
	{
		if (idx == index)
		{
			if (!(node->prev) && node->next)
			{
				node = node->next;
				*head = node;
				free(node->prev);
				node->prev = NULL;
				return (1);
			}
			else if (node->prev && !(node->next))
			{
				node = node->prev;
				free(node->next);
				node->next = NULL;
				return (1);
			}
			else if (node->prev && node->next)
			{
				node->next->prev = node->prev;
				node->prev->next = node->next;
				free(node);
				return (1);
			}
			/* need to prevent double freeing */
		        if (!(node->prev) && !(node->next))
			{
				*head = node;
				free(node);
			}
		}
		node = node->next;
		idx++;
	}
	return (-1);
}
