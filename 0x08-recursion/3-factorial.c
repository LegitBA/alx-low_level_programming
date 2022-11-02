#include "main.h"

/**
 * factorial - prints the factorial of any number
 * @n: the number
 * Return: 1, -1 or factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
		return (n * factorial(n - 1));
}
