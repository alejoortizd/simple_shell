#include "holberton.h"
/**
 * path - Entry point
 * @av: Is the parameter to be checked
 * @envp: Is the parameter to be checked
 * Return: av
 */
char *path(char av[],  char *envp[])
{
        int i = 0;
        char *tmp, *token;
        static char *pthd;
        struct stat st;

        if (stat(av, &st) == 0)
		return (av);
        for (i = 0; envp[i] != NULL; i++)
                if (_strncmp(envp[i], "PATH", 4) == 0)
                        break;
        tmp = _strdup(envp[i]);
        token = strtok(tmp, ":=");
        for (i = 0; token != NULL; i++)
        {
                pthd = malloc((_strlen(token) + _strlen(av) + 2) * sizeof(char\
				      ));
                _strcat(pthd, token);
                if (pthd[i - 1] != '/')
                        _strcat(pthd, "/");
                _strcat(pthd, av);
                if (stat(pthd, &st) == 0)
                        return (pthd);
                free(pthd);
                token = strtok(NULL, ":=");
        }
	return (av);
}
