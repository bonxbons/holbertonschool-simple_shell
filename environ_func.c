#include "shell.h"
/**
 * find_num - function to find the total number of directories
 * @path: path string
 * return: the number of directories in the path
 */
unsigned int find_num(char *path)
{
	unsigned int i = 0, flag = 0, find_num = 0;

	while (path[i])
	{
		if (path[i] != ':')
			flag = 1;
		if ((flag && path[i + 1] == ':') || (flag && path[i + 1] == '\0'))
		{
			find_num++;
			flag = 0;
		}
		i++;
	}

	return (find_num);
}

/**
 * _getenv - function that will get the enviroment variable
 * @name: the name of the enviroment variable
 * @env: enviroment variable
 * Return: the value of the variable
 */
char *_getenv(const char *name, char **env)
{
	char *ev_value, *p_name;
	unsigned int i = 0, length;

	length = _strlen_const(name);

	p_name = malloc(sizeof(char) * length + 1);
	if (name == NULL)
		return (NULL);

	_strncpyconst(p_name, name, length);

	ev_value = strtok(env[i], "=");
	while (env[i])
	{
		if (_strcmp(ev_value, p_name))
		{
			free(p_name);
			return (ev_value);
		}
		i++;
		ev_value = strtok(env[i], "=");
	}
	free(p_name);
	return (NULL);
}
