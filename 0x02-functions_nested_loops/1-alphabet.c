#include "main.h"

/**
 * main - prints alphabet in lower case
 * Return: Always 0
 */
void print_alphabet(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
		_putchar(ab);
	
	_putchar('\n');
}
