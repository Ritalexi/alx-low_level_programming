#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: pointer
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
