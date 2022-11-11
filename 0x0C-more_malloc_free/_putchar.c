#include <unistd>
#include "main.h"

/**
 * _putchar - writes to stdout
 * @c: character to print
 * Return: success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
