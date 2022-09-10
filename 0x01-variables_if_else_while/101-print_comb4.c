#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

/**
*  main -  prints all possible combinations of single-digit numbers
*
* Return: numbers separate by comma
*/

int main(void)
{
	char i = '0';
	char j = '0';
	char k = '0';
	int a = 8;
	
	for (i = 0;i <= '9'; i++)
	{
	for (j = 0; j < '7'; j++)
	{
	for (k = 0; k < '3'; k++)
	{
	putchar (i);
	putchar (i+1);
	putchar (i+2);
	putchar(',');
	putchar(' ');
	}
	}
	putchar(i);
	}
	putchar('\n');
	return (0);
}
