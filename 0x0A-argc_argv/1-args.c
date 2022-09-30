#include <stdio.h>
/**
 * main - display num of arg
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
