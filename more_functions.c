#include "shell.h"

/**
 * freearv - frees the array of pointers arv
 * @arv: array of pointers
 */
void freearv(char **arv)
{
	int i;

	for (i = 0; arv[i]; i++)
		free(arv[i]);
	free(arv);
}

/**
 * setfree - function set free when the child is not created
 * @buffer: buffer created by getline
 * @commands: array of the commands
 * Return: void
 */
void setfree(char *buffer, char **commands)
{
	if (commands == NULL)
		parentfree(buffer, commands);
	else if (strcmp("exit", commands[0]))
		getout(buffer, commands);
	else
		parentfree(buffer, commands);
}

