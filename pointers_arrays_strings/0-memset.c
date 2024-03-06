#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with const byte
 * @b: character to fill memory area with
 * @n: number of bytes to be filled
 * @s: points to memory to be filled
 *
 * Return: pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
