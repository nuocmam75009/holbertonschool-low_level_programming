#include "main.h"
/** 
 * Main - Checks of c is a letter, lowercase or uppercase
 * @c - character checked 
 *
 * Function checks if c is lowercase
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
				(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
