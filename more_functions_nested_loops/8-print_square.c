#include "main.h"
/**
 * print_square - prints square
 * @size: size of square
 */
void print_square(int size)
{
	int rows, columns;

	for (columns = 1; columns < size; columns++)
	{
		for (rows = 1; rows < size; rows++)
			_putchar('#');
		_putchar('\n');
	}
}
