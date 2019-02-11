#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: returns zero
 */

int main(void)
{
	int first;
	int second;
	int third;
	int fourth;

	for (first = 48; first <= 57; first ++)
	{
		for (second = 48; second <= 56; second++)
		{
			for (third = 48; third <= 57; third++)
			{
				for (fourth = 48; fourth <= 57; fourth++)
				{
					if (third < fourth || first < second)
					{
						putchar(first);
						putchar(second);
						putchar(' ');
						putchar(third);
						putchar(fourth);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
