#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi;

	for (longi = 0; *s != '\0'; longi++)
	{
		s++;
	}

	return (longi);
}
