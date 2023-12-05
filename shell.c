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

/**
* execute - Function to verify and execute every command
*@commands: command get
*@buffer: command in getline
*@env: enviroment variable
*@argv: argument counter
*@count: number of times that executed
*Return: Nothing(void)
*/

void execute(char **commands, char *buffer, char **env, char **argv, int count)
{
	struct stat fileStat;

	if (commands == NULL)
		null_command(buffer);
	else if (_strcmp("exit", commands[0]))
		get_out(buffer, commands);
	else if (_strcmp("env", commands[0]))
		env_end(buffer, commands, env);
	else if (stat(commands[0], &fileStat) == 0)
		execve(commands[0], commands, NULL);
	else
		_path(commands, buffer, env, argv, count);
}
