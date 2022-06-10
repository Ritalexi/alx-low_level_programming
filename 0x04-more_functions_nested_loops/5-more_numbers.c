#include "main.h"
/**
 * more_numbers -Entry point
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (j > 9)
			{
				_putchar('1');
				k  = j % 10;
			}
			_putchar('0' + k);
		}
		_putchar('\n');
	}
}
