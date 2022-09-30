#include <stdio.h>
#include <stdlib.h>
/**
 * main - mul 2 argv
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0;
 */
int main(int argc, char *argv[])
{
	int mul, index;

	mul = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		mul = mul * atoi(argv[index]);
	}
	printf("%d\n", mul);
	return (0);
}
