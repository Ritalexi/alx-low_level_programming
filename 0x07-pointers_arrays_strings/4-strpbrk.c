#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: pointer
 * @accept: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k = *(s + i);
				break;
				return (k);
			}
			if (*(accept + j) == '\0')
				return (0);
		}
	}
	return (0);
}
