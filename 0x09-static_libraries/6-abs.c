#include "main.h"

/**
 * _abs - Entry point
 *
 *  @r: number to be checked
 *
 *  Return: Always 0
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
