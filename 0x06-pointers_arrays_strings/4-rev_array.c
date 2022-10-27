#include "main.h"

/**
 * reverse_array - reverse the content of an array integer
 * @a: array
 * @n: numer of element of the array
 * Return: reversed values
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
