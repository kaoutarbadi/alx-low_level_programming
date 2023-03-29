#include <unistd.h>
#include "main.h"

/**
 * _putchar - create putchar
 * Return: Always 0
 * @c: input
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
