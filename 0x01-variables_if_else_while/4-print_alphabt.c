#include <stdio.h>
/**
 * main - print alpha in lower case except q and e
 * Return: Always 0
 */
int main(void)
{
	char vc;

	for (vc = 'a'; vc <= 'z'; vc++)
	{
		if (vc != 'e' && vc != 'q')
		putchar(vc);
	}
	putchar('\n');

	return (0);
}
