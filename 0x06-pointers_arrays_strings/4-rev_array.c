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
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		j = a[i];
		a[i] = a[n - 1];
		a[n - 1] = j;
		n--;
	}
}
