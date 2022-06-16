#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - Entry point
 * @dest: pointer
 * @src: pointer
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
