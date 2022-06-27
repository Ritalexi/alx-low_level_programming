#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - Entry point
 * @s1: pointer
 * @s2: pointer
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
