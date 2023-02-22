#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, x, z;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
			if ((i < 2 && j < 10) || (i <= 2 && j <= 3))
			{
				for (x = 0; x <= 5; x++)
				{
					for (z = 0;  z <= 9; z++)
					{
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar(':');
						_putchar('0' + x);
						_putchar('0' + z);
						_putchar('\n');
					}
				}
			}
		}
	}
}
