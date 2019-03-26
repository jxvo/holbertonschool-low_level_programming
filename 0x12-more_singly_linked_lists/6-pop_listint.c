#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to first node of a listint_t linked list
 *
 * Return: removed node's n member value
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n = 0;

	if (*head == NULL)
		return (0);
	node = *head;
	n = node->n;
	*head = node->next;
	free(node);
	return (n);
}
