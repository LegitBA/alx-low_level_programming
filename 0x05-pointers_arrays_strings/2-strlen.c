#include "main.h"

/**
 * _strlen - returns the length of strings
 * @s: string length
 * Return: lenth of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
