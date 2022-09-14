#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _isalpha - This checks for alphabets
 * @c: Operand for checking
 *
 * Description: Programm to check for alphabets
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

