#include <stdio.h>
/**
 * main - void entry
 *
 * Return: always zero (success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);

	putchar('\n');

	return (0);
}
