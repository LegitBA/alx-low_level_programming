#include <stdio.h>
/**
 * main - prints lower case in base 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	char cl;

	for (num = 0; num < 10; num++)
		putchar(num % 10 + '0');

	for (cl = 'a'; cl <= 'f'; cl++)
		putchar(cl);

	putchar('\n');

	return (0);
}
