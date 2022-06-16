#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: pointer
 * @src: pointer
 * @n: input
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
