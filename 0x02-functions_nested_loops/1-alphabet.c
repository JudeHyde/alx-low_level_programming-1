#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet: This prints the alhpabets
 *
 * Description: Programm to print alphabets using putchar function
 *
 * Return: Always 0 (Success)
 */

	int print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	} return (0);

}

