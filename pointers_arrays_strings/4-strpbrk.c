#include "main.h"
/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string searched
 * @accept: bytes searched for
 *
 * Return: is set is matched, the pointer to matched byte
 * if not match - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
