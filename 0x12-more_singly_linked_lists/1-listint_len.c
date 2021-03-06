#include <stdio.h>
#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked listint_t list
 * @h: constant listint_t struct list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
