#include "main.h"
#include <math.h>

/**
 * _pow_recursion - print the power of x raised to y
 * @x: the value
 * @y: the power
 * Return:-1, and value x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (_pow_recursion(x, y / 2));
}
