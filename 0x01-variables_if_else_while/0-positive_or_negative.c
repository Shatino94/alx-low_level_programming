#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
 * main - program execution begins here
 *
 * Return: return (0) for success
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX/2;
	
	/*test various continons with if statements*/

	if(n > 0)
	{
		printf("%d is positive\n", n);
	}

	if(n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
