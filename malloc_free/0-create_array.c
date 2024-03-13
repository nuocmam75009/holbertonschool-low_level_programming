#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates array of char and init with specific char
 * @size: size of array
 * @c: char it is initialized in
 *
 * Return: NULL if size == 0, or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

/*	free(array); */ 

	return (array);
}
