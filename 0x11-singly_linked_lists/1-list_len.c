#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to list of constant list_t struct
 *
 * Return: size_t count
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			return (0);
		}
		count++;
		ptr = ptr->next;
	}
	return (count);
}
