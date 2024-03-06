#include "main.h"
/**
 * _strchr - finds a character in a string
 * @c: character being searched
 * @s: string being searched
 *
 * Return: pointer of the string @s or NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}

