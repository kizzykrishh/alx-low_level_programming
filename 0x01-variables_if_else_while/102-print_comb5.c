#include <stdio.h>
/**
 * main - main function
 * Return: print if 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 100 ; i++)
	{
		for (j = 0 ; j < 100 ; j++)
		{
			putchar('0' + i / 48);
			putchar('0' + i % 48);

			putchar(' ');

			putchar('0' + j / 48);
			putchar('0' + j % 48);

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

