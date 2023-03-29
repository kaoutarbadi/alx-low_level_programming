#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;
	int t = 0;
	char *x = str;
	int p;

	while (*x != '\0')
	{
		x++;
		i++;
	}
	t = i - 1;
	for (p = 0 ; p <= t ; p++)
	{
		if (p % 2 == 0)
	{
		_putchar(str[p]);
	}
	}
	_putchar('\n');

}
