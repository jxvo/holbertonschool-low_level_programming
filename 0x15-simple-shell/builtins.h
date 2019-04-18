#include "shell.h"

/**
 * builtin_env - program that prints all the global environment variables
 *
 * Return: nothing
 */
void builtin_env(void)
{
	extern char **environ;
	size_t idx = 0;
	while (environ[idx])
	{
		write(STDERR_FILENO, environ[idx], _strlen(environ[idx]));
		idx++;
	}
}

/**
 * builtin_exit - program that exits the shell
 *
 * Return: nothing
 */
void builtin_exit(void)
{
	
}

/**
 * get_builtin - runs a built-in shell program using valid command token
 * @token: command token to match with command in global built-in struct
 *
 * Return: pointer to corresponding function, NULL if no match found
 */
void (*get_builtin(char *token))(void)
{
	builtin globals[] = {
		{"exit", builtin_exit},
		{"env". builtin_env},
		{NULL, NULL}
	};
	size_t idx = 0, len = 0;

	while (globals[idx].cmd != NULL)
	{
		len = _strlen(globals[idx].cmd);
		if (_strncmp(token, globals[idx].cmd, len) == 0)
			return (globals[idx].builtin);
		idx++;
	}
	return (NULL);
}
