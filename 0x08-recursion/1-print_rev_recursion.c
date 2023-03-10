#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * _print_rev_recursion- Entry point
 *@s: The character to be checked
 * Return: void
 */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
