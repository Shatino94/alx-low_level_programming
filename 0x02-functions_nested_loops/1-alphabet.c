#include <main.h>

/**
 * main - print alphabets in lower case [a-z]
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
		C++;
	}
	_putchar('\n');

	return (0);
}
