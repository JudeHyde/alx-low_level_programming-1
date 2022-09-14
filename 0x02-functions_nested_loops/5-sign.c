#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_sign - This checks for sign
 * @n: Operand for checking
 *
 * Description: Programm to check for sign of integer
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}

