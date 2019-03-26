#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointers to listint_t list structs
 * @n: value of member n of new node
 *
 * Return: pointer to allocated memory of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_new;
	listint_t *last;

	new_new = malloc(sizeof(listint_t));
	if (new_new == NULL)
		return (NULL);
	new_new->n = n;
	if (*head == NULL)
	{
		*head = new_new;
		return(new_new);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new_new;
	return (last);
}
