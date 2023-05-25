#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *operation;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	operation = argv[2];
	if (get_op_func(operation) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(operation)(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

