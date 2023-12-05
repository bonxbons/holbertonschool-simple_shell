#include "shell.h"

/**
 * prompt - displays prompt
 *
 * Return: void
 */
void prompt(void)
{
	char *str = "$ ";

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, str, 2);
}

/**
 * read_input - gets and parses a line from the prompt
 * @str: line to parse
 *
 * Return: Array of tokens to be executed
 */
char **read_input(char *str)
{
        char *token, **holder;
	unsigned int length;
	int i = 0;

	str[_strlen(str) - 1] = '\0';
	length = command_length(str);
	if (length == 0)
		return (NULL);
	holder = malloc((sizeof(char *) * (length + 1)));
	if (holder == NULL)
		return (NULL);
	token = strtok(str, " ");
	while (token != NULL)
	{       
		holder[i] = malloc(_strlen(token) + 1);
		if (holder[i] == NULL)
		{
			freearv(holder);
			return (NULL);
		}
		_strncpy(holder[i], token, _strlen(token) + 1);
		token = strtok(NULL, " ");
		i++;
	}
	holder[i] = NULL;
	return (holder);
}
