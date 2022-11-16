/*
 * File: 2-strchr.c
 * Auth: learner Abby
 */

#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: The string to be searched
 * @c: the character to be located
 * Return: if c is found - a ointer to the first occurence
 * if c is not found - NULL
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return ('\0');
}
