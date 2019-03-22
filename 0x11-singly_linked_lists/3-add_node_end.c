#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node to the end of a list_t list
 * @head: pointer to a pointer to list of struct type list_t
 * @str: string to duplicate and create new node with
 *
 * Return: pointer to the new element, NULL if malloc failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	unsigned int  x;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str != '\0')
	{
		for (x = 0; new_node->str[x] != '\0'; x++)
			;
	}
	new_node->len = x;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	new_node->next = NULL;
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;

	return (last_node);
}
