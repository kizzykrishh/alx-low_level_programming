#include <stdio.h>
/**
 * main - main function
 * Return: print 0 if true
 */
int main(void)
{
	int u;
	char i;

	for (u = 0 ; u < 10 ; u++)
		putchar(u + '0');
	for (i = 'a' ; i <= 'f' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

