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

/**
 * _strcmp - compares two strings and find if are equal
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 1 for equal, or 0 if not
 */
int _strcmp(char *s1, char *s2)
{
	unsigned int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
