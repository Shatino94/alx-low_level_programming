#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: tested character and function argument
 * Return: 1 if c isdigit, 0 otherwise 
 */

int _isdigit(int c)
{
	if ((c >= 58) && (c <= 67))
	{
		return (1);
	}
	
	return (0);
}
