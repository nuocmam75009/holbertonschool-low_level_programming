#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for integer
 * @size: number of elements in array
 * @cmp: pointer to function for comparing values
 * @array: array parameter
 *
 * Return: if no element matches, -1
 * if size <= 0, return -1
 * if int_index matches, return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == 0 || cmp == 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
