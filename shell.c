#include "holberton.h"
int main (void)
{
	char *buf = NULL, *token, **cp, *cpbuf = NULL;
	size_t size = 0;
	int i, j, st;
	ssize_t n;
	pid_t ch, wt;

	while(3)
	{
		printf("#Eeepa$ ");
		n = getline(&buf, &size, stdin);
		if (n == -1)
		{
			printf("Exit Success\n");
			return (0);
		}
		cpbuf = malloc((sizeof(char) * n) + 1);
		for(j = 0; buf[j] != '\0'; j++)
			cpbuf[j] = buf[j];
		cpbuf[j] = '\0';
		token = strtok(cpbuf, " \n");
		for(j = 0;token != NULL; j++)
			token = strtok(NULL, " \n");
		cp = malloc(sizeof(char*) * j);
		token = strtok(buf, " \n");
		for(i = 0; token != NULL; i++)
		{
			cp[i] = token;
			token = strtok(NULL, " \n");
		}
		cp[i] = '\0';
		ch = fork();
		if(ch == 0)
		{
			if(execve(cp[0], cp, NULL) == -1)
			{
				perror("fork");
				exit(EXIT_FAILURE);
			}
		} else {
			wait(&st);
		}
	}
}
