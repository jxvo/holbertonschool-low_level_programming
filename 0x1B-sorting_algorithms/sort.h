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

/* sorting algorithms */
void bubble_sort(int *array, size_t size);

#endif
