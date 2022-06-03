#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char an;
	char bn;

	for (an = 'a'; an <= 'z'; an++)
	{
		putchar(an);
	}
	for (bn = 'A'; bn <= 'Z'; bn++)
	{
		putchar(bn);
	}
	putchar('\n');
	return (0);
}
