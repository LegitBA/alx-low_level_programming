#include <stdio.h>
/**
 * main - prints lower case in base 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	char cl;

	for (num = 11; num <= 16; num++)
		putchar(num);

	for (cl = 'a'; cl <= 'f'; cl++)
		putchar(cl);

	putchar('\n');

	return (0);
}
