#include <stdio.h>
/**
 * main - prints all different possible combination of 2 digits
 * Return: Always 0
 */
int main(void)
{
	int num;
	int os;

	for (num = 01; num < 100; num++)
	{
		putchar(num + '0');
		if (num < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
