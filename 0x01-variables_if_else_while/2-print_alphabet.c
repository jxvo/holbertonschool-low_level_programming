#include <stdio.h>

/**
 * main - prints alphabet in lowercase with new line
 * Return: returns zero
 */

int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
