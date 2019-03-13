#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name out of given string and case setting function
 * @name: string name to print
 * @f: print function (uppercase or lowercase)
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
