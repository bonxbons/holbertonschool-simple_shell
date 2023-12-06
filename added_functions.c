#include "shell.h"
/**
 * _path - a function to check and execute the command that was inserted
 * @commands: array of stored commands
 * @buffer: buffer from getline
 * @env: environment variables
 * @argv: argument vector
 * @count: number of times the prompt is runned
 */
void _path(char **commands, char *buffer, char **env, char **argv, int count)
{
	struct stat fileStat2;
	int i = 0;
	char **directories;

	directories = store_e_variables(commands[0], env);
	while (directories[i])
	{
		if (stat(directories[i], &fileStat2) == 0)
			execve(directories[i], commands, NULL);
		i++;
	}

	build_message(argv, commands[0], count);

	free(buffer);
	freearv(commands);
	freearv(directories);
	exit(EXIT_SUCCESS);
}

/**
 * env_end - function to free the buffer and the commands created in getline
 * @buffer: buffer from getline
 * @commands: array of stored commands
 * @env: enviroment variables
 * return: void
 */
void env_end(char *buffer, char **commands, char **env)
{
	free(buffer);
	freearv(commands);
	print_env(env);
	exit(EXIT_SUCCESS);
}

/**
 * get_out - free the buffer and commands taken from getline
 * @buffer: buffer took from getline
 * @commands: array of stored commands
 * return: void
 */
void get_out(char *buffer, char **commands)
{
	free(buffer);
	freearv(commands);
	exit(EXIT_SUCCESS);
}

/**
 * null_command - frees the buffer created
 * @buffer: buffer took from getline
 * return: void
 */
void null_command(char *buffer)
{
	free(buffer);
	exit(EXIT_SUCCESS);
}
