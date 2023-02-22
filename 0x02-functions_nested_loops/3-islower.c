#include "main.h"
/**
 * _islower - to print lower case
 * @c: parameter to be printed
 * Return: print 1 if true and 0 if incorrect
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

