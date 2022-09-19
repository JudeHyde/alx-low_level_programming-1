#include "main.h"
#include "2-strlen.c"

/**
 * _puts - Puts characters
 * 
 * @str: string to print
 *
 * Return 
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
