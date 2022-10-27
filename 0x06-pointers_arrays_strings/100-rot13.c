#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: string
 * Return: encoded strig
 */
char *rot13(char *n)
{
	int i = 0, int j;

	char alphabets[52] = {'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
		'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd',
		'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z'};
	char rot13key[52] = {'N', 'O', 'P', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
		'C', 'D', 'E', 'F', 'G', 'I', 'J', 'K',
		'L', 'M', 'n', 'o', 'p', 'q', 'r', 's',
		't', 'u', 'v', 'w', 'x', 'y', 'z', 'a',
		'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm'};
	while (n[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == alphabet[j])
			{
				n[i] = rot13key[j];
				break;
			}
		}
		i++;
	}
	return (n);
}
