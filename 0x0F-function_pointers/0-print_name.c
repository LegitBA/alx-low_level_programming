#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: name
 * @f: pointer to function
 * Return: success 1
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
