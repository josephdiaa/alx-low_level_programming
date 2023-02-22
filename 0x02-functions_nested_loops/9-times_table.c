#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: void
 */
void  times_table(void)
{
	int i, j, x, y, a;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			if (x > 9)
			{
				y = x % 10;
				a = (x - y) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(a + '0');
				_putchar(y + '0');
			}
			else
			{
				if (j != 0)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
				_putchar(x + '0');
			}
		}
		_putchar('\n');
	}
}
