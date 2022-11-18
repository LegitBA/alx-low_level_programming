#include <unistd.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * main - writes to stdout
 * @c: character to be printed
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
