#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char c, j;

	j = 0;
	while (j <= 9)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		j++;

	}

}
