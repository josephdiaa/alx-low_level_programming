#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 *@n: first number
 * Return: int
 */
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	printf("\n");
}
