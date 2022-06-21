#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: pointer
 * @accept: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *k = accept;

	for (i = 0; *s; i++)
	{
		for (j = 0; *accept; j++)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
			accept = k;
			s++;
	}
	return ('\0');
}
