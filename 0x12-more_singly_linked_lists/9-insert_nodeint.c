#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at the nth position of a L.L.
 * @head: pointer to pointer to first node of a listint_t linked list
 * @idx: nth index of list to insert new node
 * @n: n member value of new node
 *
 * Return: pointer to new node, of NULL if malloc fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_new, *node;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	node = *head;
	if (idx == 0)
	{
		new_new = malloc(sizeof(listint_t));
		if (new_new == NULL)
			return (NULL);
		new_new->n = n;
		if (*head == NULL)
		{
			*head = new_new;
			new_new->next = NULL;
		}
		else
		{
			new_new->next = *head;
			*head = new_new;
		}
		return (new_new);
	}
	for (; count < idx - 1 && node != NULL; count++)
	{
		node = node->next;
	}
	if (node == NULL)
		return (NULL);
	new_new = malloc(sizeof(listint_t));
	if (new_new == NULL)
		return (NULL);
	new_new->n = n;
	new_new->next = node->next;
	node->next = new_new;
	return (new_new);
}
