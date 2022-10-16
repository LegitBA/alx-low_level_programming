#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 27; a < 37; a++)
	{
		putchar(a);
	}
		if (a != 36)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
}
