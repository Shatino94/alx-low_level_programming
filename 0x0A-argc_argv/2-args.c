#include <stdio.h>
/**
 * main - display all arg
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
