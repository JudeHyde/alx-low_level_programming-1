#include <stdio.h>

/**
 * main - determine if number is positive or negative
 *
 *  Description: program will use putchar to print alphabet
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
