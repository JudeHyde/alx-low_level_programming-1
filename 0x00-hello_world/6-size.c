#include <stdio.h>

/*
 * main - print the size of various types
 * 
 * Description: prints the size of various types on the computer it is compiled
 * and run on
 * 
 * Return: Always 0 (Success)
 */



int main(void)

{
	printf("The size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("The size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("The size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("The size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("The size of a float: %d byte(s)\n", (int) sizeof(float));
	return (0);
}
