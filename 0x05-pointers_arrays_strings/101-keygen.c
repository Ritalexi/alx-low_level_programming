#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int i, j;

	srand(time(NULL));
	i = 0;
	while (i <= 2645)
	{
		j = (rand() % 128);
		i += j;
		printf("%c", j);
	}
	printf("%c", 2772 - i);

	return (0);
}
