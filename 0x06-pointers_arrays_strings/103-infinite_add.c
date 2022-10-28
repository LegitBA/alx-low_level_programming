#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: the buffer to store th result
 * @size_r: the current size of buffer
 * Return: addition of two numbers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1 -, n2 -, size_r--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; n1 --, size_r)
	{
		num = (*n1 - '0') + tens;
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens && size_r >= 0)
	{
		*(r + size_r) = (tens % 10) + '0';
		return (r + size_r);
	}
	else if (tens && size_r < 0)
		return (0);
	return (r + size_r + 1);
}
