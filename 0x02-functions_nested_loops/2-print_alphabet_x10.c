#include "main.h"

/**
 * print_alphabet_x10 - in lowercase
 */
void print_alphabet_x10(void)
{
	int lb;

	for (lb = 0; lb <= 9; lb++)
	{
		char la;

		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
