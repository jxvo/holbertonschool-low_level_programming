#ifndef __SORT_H__
#define __SORT_H__

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap(int *ptr_a, int *ptr_b);
void swap_node(listint_t *node);
void swap_nodes(listint_t **list, listint_t *node, listint_t *another);

/* array sorting algorithms */
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);

/* QuickSort helper functions */
void quicker_sort(int *array, int lo, int hi);
int partition(int *array, int lo, int hi);

/* list sorting algorithms */
void insertion_sort_list(listint_t **list);
void cocktail_sort_list(listint_t **list);

#endif
