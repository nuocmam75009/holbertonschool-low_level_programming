#include "main.h"
#include <stddef.h>
/**
 * _strlen - checks length of strin
 * @s: string getting checked
 *
 * Return: length of @s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
