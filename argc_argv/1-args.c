#include<stdio.h>
/**
 * main - prints num of args passed
 * @argc: arg count
 * @argv: arrays of pointers to args
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc -1);
	return(0);
}
