#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the allocated memory inside of a list of type list_t
 * @head: pointer to list struct of type list_t
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
