#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list all types of arguments passed to the function
 * if the string is NULL, print (nil) instead.
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list values;
	int i = 0;
	char *str, *sep = "";

	va_start(values, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(values, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(values, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(values, double));
				break;
			case 's':
				str = va_arg(values, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(values);
}
