#include "holberton.h"
char *path(char av[],  char *envp[])
{
        int i = 0;
        char *tmp, *token;
        static char *pathDir;
        struct stat st;

        if (stat(av, &st) == 0)
		return (av);
        for (i = 0; envp[i] != NULL; i++)
                if (strncmp(envp[i], "PATH", 4) == 0)
                        break;
        tmp = strdup(envp[i]);
        token = strtok(tmp, ":=");
        for (i = 0; token != NULL; i++)
        {
                pathDir = malloc((strlen(token) + strlen(av) + 2) * sizeof(char\
					 ));
                _strcat(pathDir, token);
                if (pathDir[i - 1] != '/')
                        _strcat(pathDir, "/");
                _strcat(pathDir, av);
                if (stat(pathDir, &st) == 0)
                {
                        return (pathDir);
                }
                free(pathDir);
                token = strtok(NULL, ":=");
        }

	return (av);
}
