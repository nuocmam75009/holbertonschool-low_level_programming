#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sums of ints
 * @n: number
 * @...: variable numbers of parameters
 *
 * Return: if n == 0, 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list numbers;

	va_start (numbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);

	return(sum);
}
