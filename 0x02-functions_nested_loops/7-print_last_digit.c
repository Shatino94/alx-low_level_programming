#include "main.h"

/**
 * print_last_digit - function prints the last digit of a number
 *@n: input variable - number being tested
 * Return: return last digit
 */

int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
