#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - Entry point
 * @dest: pointer
 * @src: pointer
 * @n: input
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
