#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: the string length
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(++s);
		return (len);
	}
	return (0);
}
