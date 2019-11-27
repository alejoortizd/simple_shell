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
		inter == 1 ? write(1, "#cisfun$ ", 9) : inter;
		n = getline(&buf, &size, stdin);
		if (n == -1)
		{
			n == -1 && inter == 1 ? write(1, "\n", 2) : n;
			free(buf);
			return (127);
		}
		if (n > 1)
		{
			if (_strcmp(buf, "exit") == 0)
				free(buf), exit(0);
			token = strtok(buf, " \t\n");
			for (i = 0; token != NULL; i++)
				cp[i] = token, token = strtok(NULL, " \t\n");
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
	} while (3);
	_putchar('\n');
	free(buf);
	exit(0);
}
