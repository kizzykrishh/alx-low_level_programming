#include <stdio.h>
/**
 * main - main function
 * Return: print if 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 99 ; i++)
	{
		for (j = 0 ; j < 99 ; j++)
		{
			putchar(i + '0' / 10);
			putchar(i + '0' % 10);

			putchar(' ');

			putchar(j + '0' / 10);
			putchar(j + '0' % 10);

			if (i == 98 && j == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

