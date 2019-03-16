#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all parameters
 * @n: constant unsigned int numbers to add
 *
 * Return: unsigned int sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int x, sum = 0;

	if (n == 0)
		return (0);
	va_start(nums, n);
	for (x = 0; x < n; x++)
	{
		sum += va_arg(nums, unsigned int);
	}
	va_end(nums);
	return (sum);
}
