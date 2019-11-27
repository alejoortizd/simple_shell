#include "holberton.h"
/**
 *  *_strdup - Entry point
 * @str: Is the parameter to be checked
 * Return: s
 */
char *_strdup(char *str)
{
	char *s;
	int q, w;

	if (str == 0)
		return (NULL);
	for (w = 0; str[w] != '\0'; w++)
		;
	s = malloc(1 + sizeof(char) * w);
	if (s == NULL)
		return (NULL);
	for (q = 0; q < w; q++)
		s[q] = str[q];
	return (s);
}
/**
 *  *_strcat - Entry point
 * @dest: Is the parameter to be checked
 * @src: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
        int g, m;

        for (g = 0; dest[g] != '\0'; g++)
                ;
        for (m = 0; src[m] != '\0'; m++)
                dest[g + m] = src[m];
        dest[g + m] = '\0';
        return (dest);
}
