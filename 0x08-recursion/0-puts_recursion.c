#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * _puts_recursion - Entry point
 *@n: The character to be checked
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

int main()
{
	_puts_recursion("Puts with recursion");
	return (0);
}


