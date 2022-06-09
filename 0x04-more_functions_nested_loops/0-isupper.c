#include "main.h"

/**
 * _isupper - Entry point
 * @c: input
 * Return: 1 or 0
 */
int _isupper(int c)
{
	char upper;
	int i = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			i = 1;
			break;
		}
	}

	return (i);
}
