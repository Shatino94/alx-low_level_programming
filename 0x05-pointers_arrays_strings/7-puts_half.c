#include <stdio.h>
#include "main.h"
/**
 * puts_half - a function that prints half a string
 * @str: string
 * Return: nothng
 */
void puts_half(char *str)
{
	int i;

	len = _strlen(str);
	i = ((len - 1) / 2) + 1;

	while (i < len)
	{
		putchar(*(str + 1));
		i++;
	}
	putchar(10);
}

/**
 * _strlen - return string length
 * @s: string
 *
 * Return: given string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	return (len);
}
