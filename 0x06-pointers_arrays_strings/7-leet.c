#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * leet - Entry point
 *@s: array of char
 * Return: char
 */
char *leet(char *s)
{
	int ind;

	ind = 0;
	while (s[ind])
	{
		if (s[ind] == 'e' || s[ind] == 'E')
		{
			s[ind] = '3';
		}
		else if (s[ind] == 'a' || s[ind] == 'A')
		{
			s[ind] = '4';
		}
		else if (s[ind] == 'o' || s[ind] == 'O')
		{
			s[ind] = '0';
		}
		else if (s[ind] == 't' || s[ind] == 'T')
		{
			s[ind] = '7';
		}
		else if (s[ind] == 'l' || s[ind] == 'L')
		{
			s[ind] = '1';
		}
		ind++;
	}
	return (s);
}

