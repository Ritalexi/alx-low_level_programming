#include "main.h"

/**
 * cap_string -  Entry point
 * @s: pointer
 * Return: Always 0
 */

int c_s(char c);
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] !='\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}
		if (c_s(s[i]))
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
	}
	return (s);
}

/**
 * c_s - Entry point
 * @c: input
 * Return: 1
 */

int c_s(char c)
{
	int j;

	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };

	for (j = 0; j < 13; j++)
	{
		if (c == sep[j])
			return (1);
	}
	return (0);
}
