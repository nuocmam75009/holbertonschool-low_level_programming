#include <stdio.h>
/**
 * main - void entry
 *
 * Return: always zero (success)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	{
	char ch = 'A';

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
