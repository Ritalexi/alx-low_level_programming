#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * @k: number to be used
 *
 * Return: Always 0
 */
void print_to_98(int k)
{
	if (k <= 98)
	{
		for (; k <= 98; k++)
		{
			printf("%d", k);

			if (k == 98)
				continue;
			printf(". ");
		}
		printf("\n");
	}
	else
	{
		for (; k >= 98; k--)
		{
			printf("%d", k);

			if (k == 98)
				continue;
			printf(". ");
		}
		printf("\n");
	}
}
