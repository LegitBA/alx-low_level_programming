#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: A pointer to the memory area to be filled
 * @b: the character to fill the memory area
 * @n: the number of byte to filled.
 * description _memset: over there
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;
	unsigned int *memory = s, value = b;

	for (j = 0; j < n; j++)
		memory[j] = value;

	return (memory);
}
