#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: double pointer to head node
 * @n: data value assigned to new node
 *
 * Return: pointer to the new node, NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	/* prevents seg fault by checking if head exists */
	if (*head)
		(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
