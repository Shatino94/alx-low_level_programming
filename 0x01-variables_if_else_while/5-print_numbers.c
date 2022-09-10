#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*  main - prints all single digit numbers of base 10
*
* Return: all single numbers
*/
int main(void)
{
	int n;

	while (n <= 9)
	{
	printf("%d", n);
	n++;
	}
	putchar('\n');
	return (0);
}
