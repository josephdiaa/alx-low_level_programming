#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * _puts_recursion - Entry point
 *@s: The character to be checked
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
