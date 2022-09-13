#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - print all the numbers between the provided number and 98
 * @n: integer to start at
 * Return: Void.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%D\n", n);
	}
	else
	{
		while (n< 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
