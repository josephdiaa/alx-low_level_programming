#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * _isalpha - Entry point
 *@c: The character to be checked
 * Return: int
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
