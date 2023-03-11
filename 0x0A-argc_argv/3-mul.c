#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Desccription: Multiplies two numbers
 * @argc: no of command line arguments
 * @argv: Array name
 * Return: 1 if needs more arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int n1, n2, ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	ans = n1 * n2;
	printf("%d\n", ans);
	return (0);
}
