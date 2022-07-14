#include "main.h"
int prime(int p, int r);

/**
 * is_prime_number - Entry point
 * @n: input
 * Return: Always 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

else
{
return (prime(2, n));
}
}

/**
 * prime - Entry point
 * @p: input
 * @r: input
 * Return: Always 0
 */

int prime(int p, int r)
{
	if ((r / 2) % p != 0)
{
return (1);
}
else
{
return (0);
}

return (prime(p + 1, r));
}		
