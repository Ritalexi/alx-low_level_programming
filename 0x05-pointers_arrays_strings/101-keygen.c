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

	srand((unsigned int)(time(NULL)));

	char num[] = "0123456789";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char sym[] = "!@#$^&*?";
	char password[N];

	j = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (j == 1)
		{
			password[i] = num[rand() % 10];
			j = rand() % 4;
			printf("%c", password[i]);
		}
		else if (j == 2)
		{
			password[i] = symbols[rand() % 8];
			j = rand() % 4;
			printf("%c", password[i]);
		}
		else if (j == 3)
		{
			password[i] = LETTER[rand() % 26];
			j = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			j = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
