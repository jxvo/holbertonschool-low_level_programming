#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	print_rev("Holberton");
	print_rev("");
	return (0);
}
