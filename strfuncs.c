#include "holberton.h"
/**
 * _strcmp - Entry point
 * @s1: Is the parameter to be checked
 * @s2: Is the parameter to be checked
 * @n: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i, w;

	for (i = 0; s1[i] != '\0' && i < n; i++)
	{
		if (s1[i] == s2[i])
			w = s1[i] - s2[i];
		else
		{
			w = s1[i] - s2[i];
			break;
		}
	}
	return (w);
}
/**
 * _strlen - Entry point
 * @s: Is the parameter to be checked
 * Return: a
 */
int _strlen(char *s)
{
        int a;

        for (a = 0; s[a] != 0; a++)
                ;
        return (a);
}
