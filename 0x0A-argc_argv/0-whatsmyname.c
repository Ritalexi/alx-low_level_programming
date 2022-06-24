#include <stdio.h>
#include "main.h"

/**
 * main -Entry point
 * @argc: argument counter
 * @argv: argument array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
