#include "main.h"

/**
 * strcat - concatenate the string pointed to by @src
 * @dest: Pointed to the string to concat
 * @src: source string to be appended to @dest
 *
 * Return: A pointer to @dest string
 */
char *strcat (char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}

	return (dest);
}
