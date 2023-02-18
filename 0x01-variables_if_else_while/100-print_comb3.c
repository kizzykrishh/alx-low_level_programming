#include <stdio.h>
/**
 * main - main function
 * Return: print if 0
 */
int main(void)
{
	int i;
	int u;

	for (i = 0 ; i < 10 ; i++)
	{
		for (u = 1 ; u < 10 ; u++)
		{
			if (i < u && i != u)
			{
				putchar(i + '0');
				putchar(u + '0');

				if (i + u != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
