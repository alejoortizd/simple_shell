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
char *path(char av[],  char *envp[]);

#endif /* _HOLBERTON_H_ */
