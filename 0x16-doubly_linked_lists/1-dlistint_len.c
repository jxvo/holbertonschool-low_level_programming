#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: pointer to head node
 *
 * Return: unsigned int node count
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
		node = node->next;
		count++;
	}
	return (count);
}
