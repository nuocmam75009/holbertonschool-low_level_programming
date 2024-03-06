#include "main.h"
/**
 * memcpy - copies n bytes from memory area src to memory area dest
 * @n: bytes copied from memory area
 * @src: source
 * @dest: destination memory area
 *
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int  index;
	char *destination = dest;
	char *source = src;

	for (index = 0; index < n; index++)
	{
		destination[index] = source[index];
	}
	
	return (dest);
}

