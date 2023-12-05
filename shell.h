#ifndef SHELL
#define SHELL

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <stdarg.h>

void prompt(void);


char *strup(char *str);
int countstr(char *str);
int strcmp(const char *s1, const char *s2);
char *strcat(char *type, char *src);
int strlen(char *s);
#endif
