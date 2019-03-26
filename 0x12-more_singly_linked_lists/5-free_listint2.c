#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer to first node in a listint_t list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *last;

	if (head == NULL)
		return;
	node = *head;
	while (node != NULL)
	{
		last = node;
		node = last->next;
		free(last);
	}
	*head = NULL;
}
