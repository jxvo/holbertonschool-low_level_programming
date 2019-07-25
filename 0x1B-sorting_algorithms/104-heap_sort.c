#include "sort.h"

/**
 * heap_sort - sorts an array of ints in ascending order (HeapSort)
 * @array: array of integers
 * @size: number of elements in @array
 *
 * Description: implementing sift-down heap sort algorithm
 * Return: nothing!
 */
void heap_sort(int *array, size_t size)
{
	size_t n = size, i = n/2, parent = 0, child = 0;  
	int t = 0;  
  
	while (1) { /* Loops until arr is sorted */  
		if (i > 0) { /* First stage - Sorting the heap */  
			i--;           /* Save its index to i */  
			t = array[i];    /* Save parent value to t */  
			
		} else {     /* Second stage - Extracting elements in-place */  
			n--;           /* Make the new heap smaller */  
			if (n == 0)
			{
			       
				return;
			} /* When the heap is empty, we are done */  
			t = array[n];    /* Save last value (it will be overwritten) */  
			array[n] = array[0]; /* Save largest value at the end of arr */
			array[0] = t;
			print_array(array, size);
			
		}  
  
		parent = i; /* We will start pushing down t from parent */  
		child = i * 2 + 1; /* parent's left child */  
  
		/* Sift operation - pushing the value of t down the heap */  
		while (child < n) { 
			
			if (child + 1 < n  &&  array[child + 1] > array[child]) {
				child++; /* Choose the largest child */
			}
			if (array[child] > t) { /* If any child is bigger than the parent */  
				array[parent] = array[child]; /* Move the largest child up */  
				print_array(array, size);
				parent = child; /* Move parent pointer to this child */  
				
/*child = parent*2-1;  Find the next child */  
				child = parent*2+1; /* the previous line is wrong*/
			} else {  
				break; /* t's place is found */
				
			} 
			
		}
		
		array[parent] = t; /* We save t in the heap */

	}
	
}
