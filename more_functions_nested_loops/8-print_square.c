#include "main.h"
/**
 * print_square - prints square
 * @size: size of square
 */
void print_square(int size)
{
	int rows, columns;

	for (columns = 0; columns < size; columns++)
	{
		for (rows = 0; rows < size; rows++)
			_putchar('#');
		_putchar('\n');
	}
}
