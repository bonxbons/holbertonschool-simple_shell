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
