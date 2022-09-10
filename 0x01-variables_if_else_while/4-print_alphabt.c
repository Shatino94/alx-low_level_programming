#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*  main - prints the alphabet in lowercase
*
* Return: character
*/
int main(void)
{
	char alph;
	alph = 'a';
	while (alph <= 'z')
	{
	if (alph != 'q' && alph != 'e')
	putchar(alph);
	alph++;
	}
	putchar('\n');
	return (0);
}
