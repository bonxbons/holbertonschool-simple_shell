#include "shell.h"

/**
* null_command - Free the buffer created
*@buffer: buffer taked from getline
*Return: Nothing(void)
*/

void null_command(char *buffer)
{
	free(buffer);
	exit(EXIT_SUCCESS);
}

/**
* get_out - Free the buffer and commands taken from getline
*@buffer: buffer taked from getline
*@commands: command inserted
*Return: Nothing(void)
*/

void get_out(char *buffer, char **commands)
{
	free(buffer);
	freearv(commands);
	exit(EXIT_SUCCESS);
}

/**
