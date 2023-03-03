#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * reverse_array - Entry point
 *@a: first pointer
 *@n: size of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int A[n];
	int i;
	int j;

	j = 0;
	for (i = n - 1; i >= 0; i--)
	{
		A[j] = a[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = A[i];
	}
}
