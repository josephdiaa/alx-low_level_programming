#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * _strncpy - Entry point
 *@dest: first pointer
 *@src: second pointer
 *@n: number
 * Return: pointer to array of char
 */
char *_strncpy(char *dest, char *src, int n)
{

	int j;

	i = 0;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
