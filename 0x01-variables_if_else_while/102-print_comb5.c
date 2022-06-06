#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i == 9 && j == 8)
				continue;
			putchar(' ');
			for (k = 0; k <= 9; k++)
			{
				for (l = k + 1; l <= 9; l++)
				{
					putchar((k % 10) + '0');
					putchar((l % 10) + '0');
					if (k == 9 && l == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
