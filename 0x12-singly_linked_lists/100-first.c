#include <stdio.h>

void _attribute_((constructor)) hare(void);

/**
 * hare - prints a string
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
       printf("I bore my house upon my back!\n");
}
