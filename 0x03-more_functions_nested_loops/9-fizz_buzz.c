#include <stdio.h>

/**
 * main - prints 1 to 100, with exceptions for multiples of 3 and 5
 * Description: this proves I can code my way out of a wet paper bag
 * Return: always zero
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (!(x % 3) && !(x % 5))
			printf("FizzBuzz");
		else if (!(x % 3))
			printf("Fizz");
		else if (!(x % 5))
			printf("Buzz");
		else
			printf("%d", x);
		if (x < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
