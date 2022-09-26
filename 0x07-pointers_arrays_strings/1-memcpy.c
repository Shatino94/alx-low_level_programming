#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest:destination
 * @src:sourcecharacter to fill memory
 * @n:bytes to be filled
 * Return:destination @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
