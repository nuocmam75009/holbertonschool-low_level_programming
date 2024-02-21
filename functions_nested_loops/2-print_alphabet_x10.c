#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabet ten times
 * the function prints the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
	/* the function prints the alphabet*/
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}

