#include "search_algos.h"

/**
 * linear_search - searches for an element using linear search
 * @array: Array of ints to search through
 * @size: Number of elements in the array
 * @value: Number to match
 *
 * Return: Index of found element || -1 (Fail)
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%i]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}