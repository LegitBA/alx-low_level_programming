#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by @s withe constant byte @b
 * @s: A pointer to the memory area to be filled
 * @b: the character to fill the memory area
 * @n: the number of byte to filled.
 * description _memset: over there
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
