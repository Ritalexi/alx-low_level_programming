#include "main.h"

/**
 * _isdigit - Entry point
 * @c: input
 * Return: 0
 */

int _isdigit(int c)
{
	char i = '0';
	int j = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			j = 1;
			break;
		}
	}

	return (j);
}
