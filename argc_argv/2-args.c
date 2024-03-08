#include<stdio.h>
/**
 * main - prints args
 * @argc: arg count
 * @argv: arrays of pointers to args
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[1]);
	}

	return(0);
}
