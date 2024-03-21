#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by new line
 * @n: number of integers passed to function
 * @...: variable number of parameters
 * @separator: string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbers);
}
