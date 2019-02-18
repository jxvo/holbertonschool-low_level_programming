#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	int x, a = 1, b = 2, n;

	for (x = 0; x < 50; x++)
	{
		printf("%d,", a);
		if (x < 49)
			putchar(' ');
		n = a + b;
		a = b;
		b = n;
	}
	putchar('\n');
	return (0);
}
