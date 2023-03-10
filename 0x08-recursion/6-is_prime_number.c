#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 *fun - Entry point
 *@n: number
 *@i: number
 * Return: int
 */
int fun(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if ((n % i) == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (fun(n, i + 1));
}
/**
 *_sqrt_recursion - Entry point
 *@n: number
 * Return: int
 */
int is_prime_number(int n)
{
	return (fun(n, 1));
}
