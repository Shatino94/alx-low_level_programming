#include "main.h"

/**
 * print_alphabet - print alphabets in lower case [a-z]
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
