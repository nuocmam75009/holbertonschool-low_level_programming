#include "main.h"
/**
 * is_divisible - checks if num is divisable
 * @num: int being checked
 * @div: divisor
 *
 * Return: if divisible - 0, if not -1
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - checks if num is prime
 * @n: num checked
 *
 * Return: if int is prime - 1
 * if no prime - 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
