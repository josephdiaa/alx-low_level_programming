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
			for (x = 0; x <= 6; x++)
			{
				for (z = 0;  z <= 9; z++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(':');
					putchar('0' + x);
					putchar('0' + z);
					putchar('\n');
					if (i == 2 && j == 3 && x == 5 && z == 9)
					{
						return;
					}
					if (x == 6 && j != 9)
					{
						j++;
						x = 0;
					}
					if (x == 6 && j == 9 && i < 2)
					{
						i++;
						j = 0;
						x = 0;
					}
				}
			}
		}
	}
}
