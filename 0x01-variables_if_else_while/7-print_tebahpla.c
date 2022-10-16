#include <stdio.h>
/**
 * main - prints reverse alpha in lower case
 * Return: Always 0
 */
int main(void)
{
	char ba;

	for (ba = 'z'; ba >= 'a'; ba--)
		putchar(ba);

	putchar('\n');

	return (0);
}
