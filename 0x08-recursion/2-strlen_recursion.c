#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 *_strlen_recursion - Entry point
 *@s: The character to be checked
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
