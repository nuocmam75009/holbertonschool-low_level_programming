#include "main.h"
/*
 * main - prints alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}

