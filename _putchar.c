#include "holberton.h"
/**
 * _putchar - Prints a char
 * @s: Char to print
 * Return: 1
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}
