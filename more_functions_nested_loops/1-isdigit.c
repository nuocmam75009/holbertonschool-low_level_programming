#include "main.h"
/**
 * _isdigit - checks for digit 
 * @c: int being checked 
 *
 * Return: 1 if c is digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
