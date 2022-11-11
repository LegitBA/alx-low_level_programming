#include "main.h"

/**
 * malloc_checked - allocates memory to malloc
 * @b: the memory name
 * Return: 1, 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
