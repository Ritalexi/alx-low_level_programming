#include "main.h"

/**
 * leet - Entry point
 * @s: pointer
 * Return: Always 0
 */

char *leet(char *s)
{
	int i, j;

	int cl[] = {65, 69, 78, 84, 76};
	int sl[] = {97, 101, 111, 116, 186};
	int num[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == cl[j] || s[i] == sl[j])
			{
				s[i] = num[j];
				continue;
			}
		}
	}
	return (s);
}
