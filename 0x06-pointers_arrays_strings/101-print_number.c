#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * print_number - Entry point
 *@n: number
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = n * -1;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	char s1 = (n % 10) + '0';

	putchar(s1);
}

