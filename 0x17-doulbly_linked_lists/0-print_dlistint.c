#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: head node
 *
 * Return: unsigned int number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}
	return (count);
}
