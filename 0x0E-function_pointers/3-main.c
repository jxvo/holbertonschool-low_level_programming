#include "3-calc.h"

/**
 * main - calculates the result two numbers using a specified operator
 * @argc: number of parameters
 * @argv: array of string parameters (usage: calc num1 operator num2)
 *
 * Return: integer result
 */
int main(int argc, char *argv[])
{
	int (*result)(int, int);
	int num1 = 0, num2 = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] == '\0' || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]), num2 = atoi(argv[3]);
	result = get_op_func(argv[2]);
	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", result(num1, num2));
	return (0);
}
