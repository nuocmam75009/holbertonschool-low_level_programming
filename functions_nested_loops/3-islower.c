#include "main.h"
/**
 * Main - entry
 * Main - checks for lowercase character
 * @c: The character to be checked.
 *
 * Return: 1 if lowercase, 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
