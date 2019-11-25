#include "holberton.h"
/**
 * main - Entry Point
 * @argc: parameter to check
 * @argv: parameter to check
 * @envp: parameter to check
 * Return: void
 */
int main(int argc, char **argv, char **envp)
{
	char *buf = NULL, *token, *cp[64],  *pth, pt[99];
	size_t size = 0;
	int i, st, ct = 1, inter = 1;
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
			for (i = 0; token != NULL; i++)
			{
				cp[i] = token;
				token = strtok(NULL, " \t\n");
			}
			cp[i] = NULL;
			ch = fork();
			if (ch == 0)
			{
				pth = path(cp[0], envp);
				if (execve(pth, cp, envp) == -1)
				{
					sprintf(pt, "%s: %d: %s: not found\n", argv[0], ct, cp[0]);
					write(STDERR_FILENO, &pt, strlen(pt));
					free(buf);
					exit(EXIT_FAILURE);
				}
			}
			if (ch > 0)
				wait(&st);
		} ct++;
	} while (1);
	putchar('\n');
	free(buf);
	exit(0);
}

char *path(char av[],  char *envp[])
{
	int i = 0;
	char *tmp, *token;
	static char *pthd;
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
		pthd = malloc((strlen(token) + strlen(av) + 2) * sizeof(char*));
		strcat(pthd, token);
		if (pthd[i - 1] != '/')
			strcat(pthd, "/");
		strcat(pthd, av);
		if (stat(pthd, &st) == 0)
			return (pthd);
		free(pthd);
		token = strtok(NULL, ":=");
	}
	free(tmp);
	return (0);
}
