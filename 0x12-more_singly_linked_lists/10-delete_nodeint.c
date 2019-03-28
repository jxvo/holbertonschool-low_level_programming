#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes nth node and frees heap memory of node
 * @head: pointer to a pointer to the first node in a linked list
 * @index: nth index to delete
 *
 * Return: 1 if success, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);
	node = *head;
	while (node)
	{
		if (count == index - 1)
		{
			temp = node->next;
			node->next = temp->next;
			free(temp);
			return (1);
		}
		node = node->next;
		count++;
	}
	return (-1);
}
