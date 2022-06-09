#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int f[98];

	f[0] = 1;
	f[1] = 2;
	printf("%lu, %lu, ", f[0], f[1]);

	for (i = 2; i < 98; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
		if (i == 97)
			printf("%lu\n", f[i]);
		else
			printf("%lu, ", f[i]);
	}
	return (0);
}
