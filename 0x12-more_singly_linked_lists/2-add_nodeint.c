#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a listint_t list
 * @head: pointer to pointer(s) to a list of listint_t structs
 * @n: value of n member of new node
 *
 * Return: pointer to allocated memory of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_new;
	listint_t *last;

	new_new = malloc(sizeof(listint_t));
	if (new_new == NULL)
		return (NULL);
	last = *head;
	new_new->n = n;
	new_new->next = last;
	*head = new_new;
	return (new_new);
}
