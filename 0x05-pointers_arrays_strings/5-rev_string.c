#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: string
 */
void rev_string(char *s)
{
	char a = s[0];
	int i = 0;
	int x;

	while (s[i] != '\0')
		i++;
	for (x = 0; x < i; x++)
	{
		i--;
		a = s[x];
		s[x] = s[i];
		s[i] = a;
	}

}
