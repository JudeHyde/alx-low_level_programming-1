#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - determine if number is positive or negative
 *
 * Description: program checks if last digit is greater or less than five
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int dig = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, dig);
	else if (n % 10 < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dig);
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, dig);
	return (0);
}
