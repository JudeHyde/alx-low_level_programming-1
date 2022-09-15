#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints numbers under 98
 *
 * @n: integer
 *
 * Description: Prints all numbers under 98
 *
 * Return: always 0 (Success)
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; --i )
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i < 98; ++i )
		{
			printf("%d, ", n++);
			printf("98\n");
		}
	}
}
