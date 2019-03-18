#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a character parameter
 * @param: character to print
 *
 * Return: nothing
 */
void print_char(va_list param)
{
	printf("%c", va_arg(param, int));
}

/**
 * print_float - prints a float parameter
 * @param: float to print
 *
 * Return: nothing
 */
void print_float(va_list param)
{
	printf("%f", va_arg(param, double));
}

/**
 * print_int - prints an integer parameter
 * @param: integer to print
 *
 * Return: nothing
 */
void print_int(va_list param)
{
	printf("%d", va_arg(param, int));
}

/**
 * print_string - prints a string parameter
 * @param: string to print
 *
 * Return: nothing
 */
void print_string(va_list param)
{
	char *p = va_arg(param, char *);

	if (p == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", p);
}

/**
 * print_all - prints whatever is included as parameters, followed by '\n'
 * @format: string representing list of type of arguments passed (cifs)
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list print;
	unsigned int x = 0, y;
	types print_types[] = {
		{'c', print_char},
		{'f', print_float},
		{'i', print_int},
		{'s', print_string},
		{'\0', NULL}
	};
	char *sep1 = "", *sep2 = ", ";

	va_start(print, format);
	while (format[x] != '\0')
	{
		y = 0;
		while (print_types[y].typ != '\0')
		{
			if (format[x] == print_types[y].typ)
			{
				printf("%s", sep1);
				print_types[y].f(print);
				sep1 = sep2;
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(print);
}
