#include "main.h"

/**
 * _isupper - Entry point
 * Return: 1 or 0
 */
int _isupper(int c)
{
	char upper;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			return (1);
			break;
		}
		else
		{
			return (0);
		}
	}
}
