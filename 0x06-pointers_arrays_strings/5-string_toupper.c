#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * string_toupper - Entry point
 *@s: array of char
 * Return: char
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
