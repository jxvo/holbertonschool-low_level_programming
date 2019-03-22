#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to the beginning of a list_t list
 * @head: pointer to list of pointer structs of type list_t
 * @str: string to duplicate and create new node with
 *
 * Return: pointer to the new element, NULL if malloc failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int x;

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
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
