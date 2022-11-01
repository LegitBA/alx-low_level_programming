/*
 * File - 100-set_string.c
 * Auth: Abby
 */

#include "main.h"
/**
 * set_string - sets the value of a pointe to a char
 * @s: The pointer
 * @to: the char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
