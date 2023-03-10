#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 *factorial - Entry point
 *@n: number
 * Return: int
 */
int factorial(int n)
{
	if (n < -1)
	{
		return (-1);
	}

	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
