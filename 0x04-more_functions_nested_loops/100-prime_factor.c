#include <math.h>
#include <stdio.h>
/**
 * main - prints the largest prime factor of the number 612852475143.
 * Return: 0 when success always.
 */
int main(void)
{
	long i, lf;
	long number = 612852475143;
	double square = sqrt(number);

	for (i = 1; i <= square; i++)
	{
	if (number % i == 0)
	{
	lf = number / i;
	}
	}
printf("%ld\n", lf);
return (0);
}
