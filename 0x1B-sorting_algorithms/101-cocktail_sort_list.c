#include "sort.h"

/**
 * cocktail_sort_list - sorts a Doubly-LL in ascending order (cocktail sort)
 * @list: double pointer to head node of doubly linked list
 *
 * Return: nothing!
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *shaker;
	int margarita;

	if (!list || !*list)
		return;

	shaker = *list;
	do {
		margarita = 0;
		while (shaker->next)
		{
			if (shaker->n > shaker->next->n)
			{
				swap_nodes(list, shaker, shaker->next);
				shaker = shaker->prev;
				print_list(*list);
				margarita++;
			}
			shaker = shaker->next;
		}
		while (shaker->prev)
		{
			if (shaker->n < shaker->prev->n)
			{
				swap_nodes(list, shaker->prev, shaker);
				shaker = shaker->next;
				print_list(*list);
				margarita++;
			}
			shaker = shaker->prev;
		}
	} while (margarita != 0);
}

/**
 * swap_node_listint_t - swaps 'prev' and 'next' pointers of two nodes
 * @list: double pointer to head node of doubly-linked list of integers
 * @node: node numero uno
 * @another: node numero dos
 *
 * Description: assumes there are two nodes and tries to access total of four
 * Return: nothing!
 */
void swap_nodes(listint_t **list, listint_t *node, listint_t *another)
{
	another->prev = node->prev;
	node->prev = another;
	node->next = another->next;
	another->next = node;
	if (node->next)
		node->next->prev = node;
	if (!another->prev)
		*list = another;
	else
		another->prev->next = another;
}
