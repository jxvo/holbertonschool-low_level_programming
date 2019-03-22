#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to constant list of list_t type to print
 *
 * Return: size_t number of nodes printed
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t count;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
			count++;
		}
		ptr = ptr->next;
	}
	return (count);
}
