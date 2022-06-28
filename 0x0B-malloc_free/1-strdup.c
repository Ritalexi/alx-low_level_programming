#include "main.h"

/**
 * _strnlen -Entry point
 * @str: pointer
 * Return: Always 0
 */

size_t _strlen(char *str)
{
	if (str == '\0')
		return (0);

	return (1 + _strlen(str + 1));
}

/**_strdup - Entry point
 * @str: pointer
 * Return: Always 0
 */

char *_strdup(char *str)
{
	char *p;
	size_t i, n;

	if (str == NULL)
		return (NULL);

	n = _strlen(str);

	p = malloc(n * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
