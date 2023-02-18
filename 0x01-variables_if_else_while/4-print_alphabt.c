#include <stdio.h>

/**
 * main - Main function
 * followed by a new line, except q and e
 * Return: print 0 if true
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);

	putchar('\n');

	return (0);
}
