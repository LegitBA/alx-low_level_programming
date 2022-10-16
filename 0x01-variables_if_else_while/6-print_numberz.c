#include <stdio.h>
/**
 * main - prints strings zero to nine
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	putchar("\n");

	return (0);
}
