#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/* more headers goes there */

/**
*  main -  prints all possible combinations of single-digit numbers
*
* Return: numbers separate by goma
*/
int main(void)
{
	int n = 48;
	size_t i = 0;
	int a = 9;
	while (i  <= a)
	{    
	if (i == a)
	{
	i = 0;
	a = a--;
	n = n-a;
	}else
	i++;
	putchar(n);
	putchar(n+1);
	n++;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
