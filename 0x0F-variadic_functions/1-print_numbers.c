#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints passed numbers, with passed separator, followed by \n
 * @separator: what gets printed between each numbers, probably ", "
 * @n: constant unsigned int numbers
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int x;

	va_start(nums, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(nums, unsigned int));
		if ((x < n - 1) && separator)
			printf("%s", separator);
	}
	va_end(nums);
	putchar('\n');
}
