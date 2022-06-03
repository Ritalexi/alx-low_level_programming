#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int no;
	char ch;

	for (no = 0; no <= 9; no++)
	{
	putchar((no % 10) + '0');
	}
	for (ch = 'a'; ch <= 'f', ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
