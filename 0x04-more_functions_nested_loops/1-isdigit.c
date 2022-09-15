#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: function argument
 * Return: 1 if c isdigit, otherwise 0
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	
	return (0);
}
