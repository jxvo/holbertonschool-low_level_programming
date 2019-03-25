#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: constant listint_t list struct
 *
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *list;
	size_t nodes = 0;

	list = h;
	while (list != NULL)
	{
		printf("%d\n", list->n);
		list = list->next;
		nodes++;
	}
	return (nodes);
}
