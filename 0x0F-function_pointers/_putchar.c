#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * main - writes character to stdout
 * @c: the character to printed out
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
