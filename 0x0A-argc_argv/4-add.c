#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* checkNumbers - checks if the numbers are characters
* @a: char to be checked
* Return: 1 if successful otherwise 0.
**/
int checkNumbers(char *a)
{
	int number = 0;
	int i, str_len;

	str_len = strlen(a);
	for (i = 0; i < str_len; i++)
	{
		if (*a < '0' || *a > '9')
		{
			return (-1);
		}
		else
		{
			number = number * 10 + (*a - '0');
		}
	}
	return (number);
}

/**
 * main - prints the sum of positive numbers.
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of addition or 1
 */
int main(int argc, char *argv[])
{
	int i, number, results;

	results = 0;
	for (i = 1; i < argc; i++)
	{
		number = checkNumbers(argv[i]);
		if (number == -1)
		{
			printf("Error\n");
			return (1);
		}
		results += number;
	}
	printf("%d\n", results);
	return (0);

}
