#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints an input
 * @format: list of types of arguments passed to function
 * @...: variable number of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list a_list;

	va_start(a_list, format);

	while (*format)
	{
		char type = *format++;
		switch (type)

		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				break;
			case 'i':
				printf("%c", va_arg(a_list, int));
				break;
			case 'f':
				printf("%c", va_arg(a_list, int));
				break;
			case 's':
				char *str = va_arg(a_list, char*);

				printf("%s", str ? str : "(nil)");
				break;
		}
	}

	va_end(a_list);
	printf("\n");
}
