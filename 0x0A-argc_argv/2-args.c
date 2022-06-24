#include <stdio.h>
#include "main.h"

/**
 * main.h - Entry point
 * @argc: counter
 * @argv: array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
