#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argv: The number of arguments
 * @argc: The array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}