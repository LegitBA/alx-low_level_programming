#include "main.h"
#include "math.h"
/**
 * _increasevar - increases i to find sqrt
 * @i: starts at 1
 * @n: the number
 * Return: i, i + 1, or -1
 */
int _increasevar(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (_increasevar(i + 1, n));
	if (i * i > n)
		return (-1);
	return (i);
}
/**
 * _sqrt_recursion - prints the square root of a number
 * @n: the number
 * Return: -1 if n does not have a natural value and squarerrot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else if
		(n > 1)
		{
			return (_increasevar(1, n));
		}
	return (-1);
}
