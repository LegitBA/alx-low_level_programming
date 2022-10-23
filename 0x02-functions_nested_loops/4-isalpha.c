#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: character to be checked
 *
 * Return: 1 if character is a letter, 0 0therwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && 9 <= 'Z'))
		return (1);
	else
		return (0);
}
