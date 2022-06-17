#include "main.h"

/**
 * rot13 - Entry point
 * @s: ponter
 * Return: Always 0
 */

char *rot13(char *s)
{
	int i, j;

char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; j < 52; j++)
	{
		if (s[i] == a[j])
		{
			s[i] = b[j];
			continue;
		}
	}
}
return (s);
}
