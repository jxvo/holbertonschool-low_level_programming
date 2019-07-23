#include "sort.h"

/**
 * insertion_sort - sorts a list of ints in ascending order (insertion sort)
 * @list: double pointer to head node of doubly linked list
 *
 * Return: nothing!
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *omega;

	if (!list || !*list || !(*list)->next)
		return;

	omega = (*list)->next;
	while (omega)
	{
		while (omega->prev && omega->n < omega->prev->n)
		{
			swap_node(omega);

			if (!omega->prev)
				*list = omega;
			else
				omega->prev->next = omega;
			print_list(*list);
		}
		omega = omega->next;
	}
}

/**
 * swap_node - swaps 'prev' and 'next' pointers of a node and the one before it
 * @node: pointer to node
 *
 * Description: assumes there are two nodes to swap and tries for a full four
 * Return: nothing!
 */
void swap_node(listint_t *node)
{
	if (!node || !node->prev)
		return;
	node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	node->next = node->prev;
	if (node->prev->prev)
		node->prev = node->prev->prev;
	else
		node->prev = NULL;
	node->next->prev = node;
}
