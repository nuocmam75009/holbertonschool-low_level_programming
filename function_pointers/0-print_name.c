#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name printed
 * @f: pointer to function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
