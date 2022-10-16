#include <stdio.h>
/**
 * main - prints all different possible combination of 2 digits
 * Return: Always 0
 */
int main(void)
{
	int num;
	int os;

	for (num = 01; num < 10; num++)
		putchar(num % 10 + '0');
	for (os = 10; os < 100; os++)
		putchar(os % 10 + '0');
	{
		if (num != 9)
			if (os != 99)
	}
	{
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
