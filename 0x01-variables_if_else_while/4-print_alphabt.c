#include <stdio.h>
/**
 * main - print alpha in lower case except q and e
 * Return: Always 0
 */
int main(void)
{
	char vc;

	for (vc = 'a'; vc <= 'd'; vc++)
		putchar(vc);

	for (vc = 'f'; vc <= 'p'; vc++)
		putchar(vc);

	for (vc = 'r'; vc <= 'z'; vc++)
		putchar(vc);

	return (0);
}
