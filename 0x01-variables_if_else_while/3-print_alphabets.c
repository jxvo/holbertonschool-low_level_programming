#include <stdio.h>

/**
 * main - prints alphabet in lower and upper case
 * Return: returns zero
 */

int main(void)
{
	char c = 'a';
	char uc = 'A';

	for (; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (; uc <= 'Z'; uc++)
	{
		putchar(uc);
	}
	putchar('\n');
	return (0);
}
