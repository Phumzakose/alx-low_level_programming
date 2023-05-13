#include <stdio.h>
#include <stdlib.h>

/**
* main - multiply two numbers
* @argc: number of arguments
* @argv: array of pointers to arguement strings
* Return: result of multiplication or 1 otherwise error
**/
int main(int argc, char *argv[])
{
	int num1, num2 = 0;
	int sum;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		sum = num1 * num2;
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
