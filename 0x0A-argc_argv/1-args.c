#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the prog
 * @argc: count arguement
 * @argv: argument
 * Return:Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /*ignore argv*/
	printf("%:\n", argc - 1);

	return (0);
}
