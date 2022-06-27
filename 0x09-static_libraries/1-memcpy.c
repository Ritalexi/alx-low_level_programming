#include "main.h"
#include <string.h>

/**
 * _memcpy - Entry point
 * @dest: pointer
 * @src: parameter
 * @n: parameter
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
