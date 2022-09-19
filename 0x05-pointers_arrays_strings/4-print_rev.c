#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to be reverse
 * Return: void
 */
void print_rev(char *s)
{
	int length = strlen(s);

	do
	{
		putchar(*(s + length));
	}
	while (length--);
	putchar(10);
}
