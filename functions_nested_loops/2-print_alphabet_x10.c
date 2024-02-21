#include "main.h"

/**
 * print_alphabet - function that prints alphabet
 * the function prints the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void) /* ta mère*/
	/* the function prints the alphabet*/
{
	char alphabet;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}

