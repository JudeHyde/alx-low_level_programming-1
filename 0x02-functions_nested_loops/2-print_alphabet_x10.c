#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet_x10 - This prints the alhpabets
 *
 * Description: Programm to print alphabets 10 times using putchar function
 *
 * Return: Always 0 (Success)
 */

	void print_alphabet_x10(void)
{
	int rollover = 0;

	while (rollover < 10)
	{
		int i = 97;

		while (i < 123)
			{
			putchar(i);
			i++;
			}
		putchar(10);
		rollover++;
	}
}

