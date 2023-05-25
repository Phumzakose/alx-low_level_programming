#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	if (separator == NULL || *separator == 0)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (n > 0)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
