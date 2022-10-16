#include <stdio.h>
/**
 * main - prints strings 0 to 10
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = '0'; num < '10'; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
