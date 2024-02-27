#include <stdio.h>
/**
 * main - Prints numbers from 1 to 100
 * for multiples of 3 - prints Fizz
 * for multiples of 5 - prints Buzz
 * for multiples of both - prints FizzBuzz
 *
 * Return: Always 0
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if ((number % 15) == 0)
			printf("FizzBuzz");

		else if ((number % 3) == 0)
			printf("Fizz");

		else if ((number % 5) == 0)
			printf("Buzz");

		else
			printf("%d", number);

		if (number < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
