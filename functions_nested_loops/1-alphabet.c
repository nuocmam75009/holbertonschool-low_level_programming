#include "main.h"

/**
 * print_alphabet - function that prints alphabet
 * the function prints the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void) /* ta mère*/
/* the function prints the alphabet*/
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}

