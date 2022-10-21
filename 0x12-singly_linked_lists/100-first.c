#include "lists.h"

void _attribute_((constructor)) primary(void);

/**
 * primary - print before the main function
 * Return: void
 */

void primary(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon ");
	printf("my back!\n");
}
