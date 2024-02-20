#include <stdio.h>
/**
 * main - Entry
 *
 * Return - always zero (success)
 */
int main(void)
{
	char ch = 0;

	for (ch = 0; ch < 10; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
