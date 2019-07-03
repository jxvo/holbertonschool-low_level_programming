B#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given index
 * @h: double pointer to head node
 * @idx: index to insert new node
 * @n: value of new node
 *
 * Return: pointer to new node, NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp, *node = *h;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->next = NULL;
	new->n = n;
	if (!*h)
	{
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = node;
		node->prev = new;
		*h = new;
		return (new);
	}
	for (; idx && node->next; node = node->next, idx--)
		;
	temp = node->prev;
	if (idx > 1)
		return (NULL);
	else if (idx == 1)
	{
		node->next = new;
		new->prev = node;
		return (new);
	}
	temp->next = new;
	node->prev = new;
	new->next = node;
	new->prev = temp;
	return (new);
}
