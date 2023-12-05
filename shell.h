#ifndef SHELL
#define SHELL

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>

void prompt(void);
char **read_input(char *str);
void execute(char **commands, char *buffer, char **env,
		char **argv, int count);
void freearv(char **arv);
void setfree(char *buffer, char **commands);
char *strup(char *str);
int countstr(char *str);
int _strcmp(const char *s1, const char *s2);
int _strlen(char *s);
int _putchar(char c);
void free_parent(char *buffer, char **commands);
char *_getenv(const char *name, char **env);
unsigned int _strlen_const(const char *str);
char *_strncpyconst(char *dest, const char *src, int n);
void get_out(char *buffer, char **commands);
void env_get(char *buffer, char **commands, char **env);
unsigned int command_length(char *string);
void null_command(char *buffer);
void env_end(char *buffer, char **commands, char **env);
void _path(char **commands, char *buffer, char **env, char **argv, int count);
void signal_handle(int sign);
int main(int __attribute__((unused)) argc, char **argv, char **env);
#endif
