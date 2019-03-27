#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of all the n members of a listint_t list
 * @head: pointer to head node
 *
 * Return: integer sum, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
