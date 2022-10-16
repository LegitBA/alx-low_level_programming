#include <stdio.h>
/**
 * main - print alpha in lower case and upper case
 * Return: Always 0
 */
int main(void)
{
	char as;

	for (as = 'a'; as <= 'z'; as++)
		putchar(as);

	for (as = 'A'; as <= 'Z'; as++)
		putchar(as);

	putchar('\n');

	return (0);
}
