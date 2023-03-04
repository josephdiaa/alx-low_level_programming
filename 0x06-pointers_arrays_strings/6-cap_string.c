#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * cap_string - Entry point
 *@s: array of char
 * Return: char
 */
char *cap_string(char *s)
{
	int ind;

	ind = 0;
	while (s[ind])
	{
		while (!(s[ind] >= 'a' && s[ind] <= 'z'))
		{
			ind++;
		}
		if (s[ind - 1] == ' ' ||
			s[ind - 1] == '\t' ||
			s[ind - 1] == '\n' ||
			s[ind - 1] == ',' ||
			s[ind - 1] == ';' ||
			s[ind - 1] == '.' ||
			s[ind - 1] == '!' ||
			s[ind - 1] == '?' ||
			s[ind - 1] == '"' ||
			s[ind - 1] == '(' ||
			s[ind - 1] == ')' ||
			s[ind - 1] == '{' ||
			s[ind - 1] == '}' ||
			ind == 0)
		{
			s[ind] -= 32;
		}
		ind++;
	}
	return (s);
}

