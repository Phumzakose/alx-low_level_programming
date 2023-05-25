#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int x, i;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	a = (char *)main;
	for (i = 0; i < x; i++)
	{
		if (i == x - 1)
		{
			printf("%.2hhx ", a[i]);
			break;
		}
		
		printf("%02hhx", a[i]);
	}
	return (0);
}
