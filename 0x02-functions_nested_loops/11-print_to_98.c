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
		for (; n <= 98; n++)
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
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(". ");
		}
		printf("\n");
	}
}
