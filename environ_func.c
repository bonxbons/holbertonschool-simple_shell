#include "shell.h"
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

	_strncpyconst(name,
