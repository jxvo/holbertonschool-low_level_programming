#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all values of a doubly linked list
 * @head: pointer to head node
 *
 * Return: integer result
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int result = 0;

	while (node)
	{
		result += node->n;
		node = node->next;
	}
	return (result);
}
