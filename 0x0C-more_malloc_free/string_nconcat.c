#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Entry point
 * @s1: pointer
 * @s2: pointer
 * @n: input
 * Return: concat strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k;
	char *s;

	k = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = strlen(s1);
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	s = malloc(i + n + 1);
	if (s == NULL)
	{
		return (NULL):
	}
	for (j = 0; j < i; j++)
	{
		s[j] = s1[j];
	}
	for (; j < i + n; j++)
	{
		s[j] = s2[k];
		k++;
	}
	s[j] = '\0';
	return (s);
}
