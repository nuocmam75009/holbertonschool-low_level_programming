#include "main.h"
/**
 * factorial - returns the factorial of number
 * @n: number checked
 *
 * Return: -1 if error
 * if n>0 returns factorial of n
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
