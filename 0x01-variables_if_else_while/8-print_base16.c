#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase with new line
 * Return: returns zero
 */

int main(void)
{
	char n = '0';
	char l = 'a';

	for (; n <= '9'; n++)
	{
		putchar(n);
	}
	for (; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
