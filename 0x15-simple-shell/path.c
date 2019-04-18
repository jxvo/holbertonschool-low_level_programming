#include "shell.h"

/**
 * _getpath - This functions finds and return the PATH
 * variable for the global environment vector
 *
 * Return: PATH, if found, or NULL
 */

char *pathfinder(char **envp)
{
	int i, a;
	char *path;

	while (*envp)
	{
		if (strncmp(*envp, "PATH=", 5) == 0)
		{
			path = *envp;
			while (*path && i < 5)
			{
				path++;
				i++;
			}
			return (path);
		}
		envp++;
	}
	return (NULL);
}
