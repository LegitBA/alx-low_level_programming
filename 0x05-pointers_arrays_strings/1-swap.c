#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: first value
 * @b: second value
 * Return:a for b and b for a
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
