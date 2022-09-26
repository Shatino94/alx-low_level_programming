#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s:char
 * @c:char
 * @n:unsigned int
 * Return:char
 */
char *_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *memory = s, value = c;

	for (i = 0; i < n; i++)
		memory[i] = value;

	return (memory);
}
