#include <stdio.h>
/**
 * main - prints reverse alpha in lower case
 * Return: Always 0
 */
int main(void)
{
	char ba;

	for (ba = 'a'; ba <= 'z'; ~ba++)
		putchar(ba);

	putchar('\n');

	return (0);
}
