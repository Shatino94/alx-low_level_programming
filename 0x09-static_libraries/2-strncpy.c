#include "main.h"
/**
 * _strncpy - copy a string
 * @dest:destination char
 *  @src:sourcechar
 * @n:int value
 * Return:char dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
	*(dest + i) = *(src + i);
	i++;
	}
	while (i < n)
	{
	*(dest + i) = '\0';
	i++;
	}
	return (dest);
}