#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - Entry point
 * @s: pointer
 */

void rev_string(char *s)
{
	int i, j;
	char res;

	for (i = 0; s[i] != 0; i++)
	{
	}
	j = 0;
	for (i = i - 1; j < i; j++)
	{
		res = s[i];
		s[i] = s[j];
		s[j] = res;
		i--;
	}
}
