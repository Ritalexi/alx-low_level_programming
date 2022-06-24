#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -Entry point
 * @argc: counter
 * @argv: array
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, j = 0, k;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k]; k++)
		{
		if (!(isdigit(argv[i][k])))
		{
			printf("Error\n");
			return (1);
		}
		}

		j = j + atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}
