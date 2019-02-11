#include <stdio.h>

/**
 * main - prints all possible combinations of two digit numbers
 * Return: returns zero
 */

int main(void)
{
	char tens;
	char ones;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = tens + 1; ones <= '9'; ones++)
		{
			if (tens < ones)
			{
				putchar(tens);
				putchar(ones);
				if (tens < '8' || ones < '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
