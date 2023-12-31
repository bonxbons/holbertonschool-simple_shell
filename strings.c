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

/**
 * _strncpyconst - function that copies a constant string to another
 * @dest: destination of the string
 *@src: string to copy
 *@n: the length of the string
 *Return: dest
 */
char *_strncpyconst(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

/**
 * _strlen_const - a function to find the length of a constant string
 * @str: string to calculate the length
 * return: the length of the string
 */
unsigned int _strlen_const(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);

}

/**
 * _strncpy - function that will copy a string into other
 * @dest: destination of the string
 * @src: the string to copy
 * @n: length of the string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
