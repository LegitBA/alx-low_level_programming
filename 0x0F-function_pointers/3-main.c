#include "3-calc.h"
/**
 * main - prog that performs simple funcions
 * @argc: number of argument
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char argv[])
{
	int arg1, arg2, result;
	char o;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[1]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		print("Error\n");
		exit(99);
	}
	o = *argv[2];

	if ((o == '/' || 0 == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);
	printf("%d\n", result);

	return (0);
}
