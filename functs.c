#include "holberton.h"
/**
 * *_strcat - Entry Point
 * @dest: parameter to check
 * @src: parameter to check
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	i = 0;
	for (; dest[i] != '\0';)
	{
		i++;
	}
	for (j = 0; src[j] != '\0';)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
