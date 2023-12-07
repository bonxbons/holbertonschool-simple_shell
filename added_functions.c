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
* env_end - Function to frees the buffer and commands created in getline
*@buffer: buffer from getline
*@commands: array store commands
*@env: enviroment variables
*Return: Nothing(void)
*/

void env_end(char *buffer, char **commands, char **env)
{
	free(buffer);
	freearv(commands);
	print_env(env);
	exit(EXIT_SUCCESS);
}

/**
