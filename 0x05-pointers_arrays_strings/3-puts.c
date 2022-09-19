#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - Puts characters
 * 
 * @str: string to print
 *
 * Return 
 */

void _puts(char *str)
{
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
