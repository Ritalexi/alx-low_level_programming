#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry poinr
 * @argc: counter
 * @argv: array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 1;

	if (argc == 3)
	{
		i = i * atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}

	if (argc != 3)
	{
		printf("Error\n");
	}
	return (0);
}
