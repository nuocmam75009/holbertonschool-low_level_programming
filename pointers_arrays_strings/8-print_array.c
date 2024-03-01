#include "main.h"
#include <stdio.h>
/**
 * print_array - printing array
 * @a: array of integers
 * @n: number of array being printed
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
