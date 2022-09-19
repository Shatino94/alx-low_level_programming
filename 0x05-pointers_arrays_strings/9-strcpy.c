#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy paste string
 * @dest: destination
 * @scr: source
 *
 * Return: Destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
i}
