#include <main.h>

/**
 * void print_most_numbers - prints 0 to 9
 * without 2 and 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int d =0;
	while (d < 10)
	{
		if (d != 2 && d != 4)
			_putchar(d + '0');

		d++
	}
	_putchar('\n');
}
