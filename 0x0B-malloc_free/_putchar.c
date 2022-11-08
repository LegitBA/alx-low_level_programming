#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes to stdout
 * @c: character to be printed out 
 * Return: On success 1
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
