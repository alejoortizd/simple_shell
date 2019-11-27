#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

int _putchar(char s);
char *_strcat(char *dest, char *src);
int _strncmp(char *s1, char *s2, int n);
char *path(char av[],  char *envp[]);
char *_strdup(char *str);
int _strlen(char *s);

#endif /* _HOLBERTON_H_ */
