#include "main.h"

/**
 * rev_string - prints strings in reverse
 * @s: string
 * Return: reversed string
 */
void rev_string(char *s)
{
	int t = 0;

	while (s[t] != '\0')
		t++;
	for (t = t - 1; t >= 0; t--)
		_putchar(s[t]);
}
