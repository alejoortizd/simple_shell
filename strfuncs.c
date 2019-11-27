#include "holberton.h"
/**
 *  *_strcat - Entry point
 * @dest: Is the parameter to be checked
 * @src: Is the parameter to be checked
 * @n: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src, int n)
{
	int g, m;

	for (g = 0; dest[g] != '\0'; g++)
		;
	for (m = 0; m < n && src[m] != '\0'; m++, g++)
		dest[g] = src[m];
	return (dest);
}
/**
 * _strcmp - Entry point
 * @s1: Is the parameter to be checked
 * @s2: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i, w;

	for (i = 0; s1[i] != '\0'; i++)
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
