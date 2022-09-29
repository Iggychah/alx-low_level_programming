#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string.
 * @s: string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int h = 0;

	if (*s != '\0')
	{
	h++;
	h += _strlen_recursion(s + 1);
	}
	return (h);
}
