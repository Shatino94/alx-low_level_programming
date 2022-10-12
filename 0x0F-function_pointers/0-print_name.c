#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_name - function's name
 *@name: pointer
 *@f: pointer
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
