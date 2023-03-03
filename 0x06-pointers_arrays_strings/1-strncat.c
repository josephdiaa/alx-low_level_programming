#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * _strncat - Entry point
 *@dest: first pointer
 *@src: second pointer
 *@n: number
 * Return: pointer to array of char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
