#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print string
 * @separator: string to be printed in between strings
 * @n: numbers of strings passed to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);
		
		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);


		if (i != n - 1 && separator != NULL)
			printf("%s", separator);

	}

	va_end(string);
	printf("\n");
}
