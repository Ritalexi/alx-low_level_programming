#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i != j)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	 putchar('\n');
	 return (0);
}
