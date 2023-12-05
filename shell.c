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
