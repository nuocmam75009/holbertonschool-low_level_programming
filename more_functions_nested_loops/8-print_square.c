#include "main.h"
/**
 * print_square - prints square
 * @size: size of square
 */
void print_square(int size)
{
	int rows, columns;

	for (rows = 1; rows <= size; rows++)
	{
		for (columns = 1; columns <= size; columns++)
			_putchar('#');
	}
	_putchar('\n');
}
