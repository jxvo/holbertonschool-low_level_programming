#ifndef __SORT_H__
#define __SORT_H__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

/* QuickSort helper functions */
void quicker_sort(int *array, size_t size, int lo, int hi);
int partition(int *array, size_t size, int lo, int hi);

/* MergeSort helper functions */
void mergeSort(int *array, int *temp, size_t size, size_t beg, size_t end);
void merge(int *array, int *temp, size_t beg, size_t mid, size_t end);

/* radix sort helper functions */
void radix_counting_sort(int *array, size_t size, int sig, int *buff);
int get_max(int *array, int size);

/* Hoare QuickSort helper functions */
void swap_ints(int *a, int *b);
int hoare_partition(int *array, size_t size, int left, int right);
void hoare_sort(int *array, size_t size, int left, int right);

/* list sorting algorithms */
void insertion_sort_list(listint_t **list);
void cocktail_sort_list(listint_t **list);

#endif
