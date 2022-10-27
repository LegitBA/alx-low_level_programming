#include "main.h"

/**
 * leet - encode a string into1337
 * @str: input
 * Return: the value of n
 */
char *leet(char *str)
{
	int indx1 = 0, indx2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (str[indx1] == leet[indx2] || str[indx1 - 32 == leet[indx2]
				str[indx1] = indx2 + '0'
		}
		indx1++;
	}
	return (str);
}
