#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

/**
 * struct types - corresponds character to print function of matching type
 *
 * @typ: character of type (c = char, f = float, i = int, s = string)
 * @f: pointer to print function
 */
typedef struct types
{
	char typ;
	void (*f)();
} types;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
