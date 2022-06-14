#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - Entry point
 * @s: pointer
 * Return: Always 0
 */

int _atoi(char *s)
{
	int i, j;
	unsigned int res;
	int sign = 1;
	char now;

	i = 0;
	res = 0;
	while (*(s + i) != '\0')
	{
		now = *(s + i);
		if (now == '-')
		{
			sign *= -1;
		}
		if (now >= '0' && now <= '9')
		{
			j = i;
			while (*(s + j) > 47 && *(s + j) < 58)
			{
				res = (res * 10) + *(s + j) - '0';
				j++;
			}
			break;
		}
		i++;
	}
	if (sign < 0)
		res *= sign;
	return (res);
}
