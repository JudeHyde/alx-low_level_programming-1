#include <stdio.h>
#include <stdlib.h>


/**
 * print_alphabet: This prints the alhpabets
 *
 * Description: Programm to print alphabets using putchar
 *
 * Return: Always 0 (Success)
 */

	void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	} return (0);

}

	int main(void)
{
	{
		print_alphabet();
		return (0);
	}

	return (0);
}
