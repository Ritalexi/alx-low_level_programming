#include "main.h"

/**
 * _concat - Entry point
 * @s: pointer
 * Return: Always 0
 */

size_t _concat(char *s)
{
	if (s == '\0')
		return (0);

	return (1 + _concat(s + 1));
}
/**
 * str_concat - Entry point
 * @s1: pointer
 * @s2: pointer
 * Return: Always 0
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	size_t i, j, k;

	j = _concat(s1);
	k = _concat(s2);

	p = malloc((j + k) * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < k; i++)
	{
		p[j + i] = s2[i];
	}
return (p);
}
