#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts - Entry point
 * @str: pointer
 * Return: Always 0
 */

void _puts(char *str)
{
	char result[] = puts(str);

	return (result);
}
