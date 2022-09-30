#include "main.h"

/**
 * _islower - checks lowercase characters
 * @c: is the int value argument of the function
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
