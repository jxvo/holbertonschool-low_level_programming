#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatentes all arguments to a string
 * @ac: integer argument count
 * @av: double pointer of argument strings
 * Return: pointer to new string, each arg separated by '\n', NULL if failure
 */
char *argstostr(int ac, char **av)
{
	char *ret;
	int x, y, z = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (y = 0; y < ac; y++)
	{
		for (; av[y][z]; z++)
			;
	}
	ret = malloc((z + ac + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	z = 0;
	for (y = 0; y < ac; y++)
	{
		for (x = 0; av[y][x]; x++, z++)
			ret[z] = av[y][x];
		ret[z++] = '\n';
	}
	return (ret);
}
