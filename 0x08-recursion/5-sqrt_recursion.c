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
	int sq = i * i;

	if (sq > n)
	{
		return (-1);
	}

	if (sq == n)
	{
		return (i);
	}
	return (fun(n, i + 1));
}
/**
 *_sqrt_recursion - Entry point
 *@n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (fun(n, 1));
}
