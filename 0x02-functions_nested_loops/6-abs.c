#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _abs - This returns absolute
 * @n: Operand for checking
 *
 * Description: Programm to return absolute value of an integer
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}

