#include <stdio.h>
/**
 * main - Entry
 *
 * Return - always zero (success)
 */
int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
		putchar((num %10) + '0');

	putchar('\n');

	return (0);
}
