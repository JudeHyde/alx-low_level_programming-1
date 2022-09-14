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
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	return (0);
}

