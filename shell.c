#include "holberton.h"
int main (int argc, char **argv, char **envp)
{
	char *buf = NULL, *token, *cp[64],  *michel, michel2[99];
	size_t size = 0;
	int i, st, michel1 = 1, inter = 1;
	ssize_t n;
	pid_t ch;

	(void) argc;
	isatty(0) == 0 ? inter = 0 : inter;
	do {
		inter == 1 ? printf("#Cisfun$ ") : inter;
		n = getline(&buf, &size, stdin);
		if (n == -1)
		{
			n == -1 && inter == 1 ? printf("\n") : n;
			free(buf);
			return (127);
		}
		if (n > 1)
		{
			if (strncmp(buf, "exit", 4) == 0)
			{
				free(buf);
				exit(0);
			}
			token = strtok(buf, " \t\n");
			for(i = 0; token != NULL; i++)
			{
				cp[i] = token;
				token = strtok(NULL, " \t\n");
			}
			cp[i] = NULL;
			ch = fork();
			if(ch == 0)
			{
				michel = path(cp[0], envp);
				if(execve(michel, cp, envp) == -1)
				{
					sprintf(michel2, "%s: %d: %s: not found\n", argv[0], michel1, cp[0]);
					write(STDERR_FILENO, &michel2, strlen(michel2));
					free(buf);
					exit(EXIT_FAILURE);
				}
			}
			if (ch > 0)
			{
				wait(&st);
			}
		} michel1++;
	} while (1);
	putchar('\n');
	free(buf);
	exit(0);
}

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
		free(tmp);

	return (0);
}
