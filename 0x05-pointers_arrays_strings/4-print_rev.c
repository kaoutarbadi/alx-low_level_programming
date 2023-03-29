#include "main.h"

/**
 * print_rev - function that print string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i = 0;
	int t;

	while (*s != '\0')
	{
		t++;
		s++;
	}
	s--;
	for(t = i; t > 0; t--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
