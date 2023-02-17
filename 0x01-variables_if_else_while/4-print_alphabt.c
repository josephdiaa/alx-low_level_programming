#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		if ('a' + i != 'q' && 'a' + i != 'e')
		{
			putchar('a' + i);
		}
	}
	putchar('\n');
	return (0);
}
