#include <stdio.h>
/**
 * main - void entry
 *
 * Return: always zero (success)
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
