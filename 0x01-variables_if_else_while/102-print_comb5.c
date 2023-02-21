#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, x, z;

	for (i = 0; i < 10; i++)
	{
		for (z = 0; z < 9 ; z++)
		{
			for (j = 0; j < 10; j++)
			{
				for (x = 0; x < 10; x++)
					{
					if (i != j || z < x)
					{
					putchar('0' + i);
					putchar('0' + z);
					putchar(' ');
					putchar('0' + j);
					putchar('0' + x);
					if (i < 9 || z < 8 || j < 9 || x < 9)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
