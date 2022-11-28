#include "lists.h"
#include <stdio.h>

void _attribute_((constructor)) hare(void);

/**
 * hare - prints a string
 */

void hare(void)
{
	pintf("You're beat! and yet, you must allow,
		\nI bore my house upon my back!\n");
}
