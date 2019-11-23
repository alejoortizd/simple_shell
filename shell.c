#include "holberton.h"
int main (char argc, char **argv, char **envp)
{
	char *buf = NULL, *token, **cp, *cpbuf = NULL, *michel, michel2[99];
	size_t size = 0, index;
	int i, j, st, michel1 = 1;
	ssize_t n;
	pid_t ch, wt;

	while(3)
	{
		printf("#Eeepa$ ");
		n = getline(&buf, &size, stdin);
		if (n == -1)
		{
			free(buf);
			printf("Exit Success\n");
			return (0);
		}
		cpbuf = malloc((sizeof(char) * n) + 1);
		if (cpbuf == NULL)
			return(0);
		for(j = 0; buf[j] != '\0'; j++)
			cpbuf[j] = buf[j];
		cpbuf[j] = '\0';
		token = strtok(cpbuf, " \n");
		for(j = 0;token != NULL; j++)
			token = strtok(NULL, " \n");
		free(cpbuf);
		cp = malloc(sizeof(char*) * j);
		token = strtok(buf, " \n");
		for(i = 0; token != NULL; i++)
		{
			cp[i] = token;
			token = strtok(NULL, " \n");
		}
		cp[i] = NULL;
		michel = path(cp[0], envp);
		ch = fork();
		if(ch == 0)
		{
			if(execve(michel, cp, envp) == -1)
			{
				free(cp);
				free(buf);
				sprintf(michel2, "%s: %d: %s: not found\n", argv[0], michel1, cp[0]);
				write(STDERR_FILENO, &michel2, strlen(michel2));
				exit(EXIT_FAILURE);
			}
		} else {
			wait(&st);
		} michel1++;
	}
}


char *path(char av[],  char *envp[])
{
        int i = 0;
        char *tmp, *token;
        static char *pathDir;
        struct stat st;

        if (stat(av, &st) == 0)
        {
                return (av);
        }
        for (i = 0; envp[i] != NULL; i++)
                if (strncmp(envp[i], "PATH", 4) == 0)
                        break;
        tmp = strdup(envp[i]);
        token = strtok(tmp, ":=");
        for (i = 0; token != NULL; i++)
        {
                pathDir = malloc((strlen(token) + strlen(av) + 2) * sizeof(char\
					 ));
                strcat(pathDir, token);
                if (pathDir[i - 1] != '/')
                        strcat(pathDir, "/");
                strcat(pathDir, av);
                if (stat(pathDir, &st) == 0)
                {
                        return (pathDir);
                }
                free(pathDir);

                token = strtok(NULL, ":=");
        }

	return (0);
}
