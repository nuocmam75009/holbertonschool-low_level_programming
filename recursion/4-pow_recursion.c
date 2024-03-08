#include "main.h"
/**
 * _pow_recursion - returns value of @x to power of @y
 * @x:number returned to power of @y
 * @y: power
 *
 * Return: if y < 0 returns -1
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
