#include "shell.h"
/**
 * _strlen - gives the length of the string
 * @s: the pointer to the string
 * Return: the length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
