#include "main.h"

/**
 * swap_int - swaps two pointers
 * @a: pointer1
 * @b: pointer2
 *
 * Return: void
 */

void swap_int(int *a, int *b);
{
	int  firstswap = *a;
	int secondswap = *b;
	*a = secondswap;
	*b = firstswap;
}
