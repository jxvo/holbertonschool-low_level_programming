#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints passed strings, with separator, followed by '\n'
 * @separator - string separator to print between strings, usually ", "
 * @n: constant unsigned int number of strings passed
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int x;
	char *str;

	va_start(strings, n);
	for (x = 0; x < n; x++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if ((x < n - 1) && separator)
			printf("%s", separator);
	}
	va_end(strings);
	putchar('\n');
}
