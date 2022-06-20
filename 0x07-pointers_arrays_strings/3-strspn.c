#include "main.h"

/**
 * _strspn - Entry point
 * @char: pointer
 * @accept: pointer
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n = 0;

	for (i = 0; *s; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
	}
	return (0);
}
