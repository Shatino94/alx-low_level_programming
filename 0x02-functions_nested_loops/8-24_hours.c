#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hr;
	int min;

	for (int hr = 0; hr < 24; hr++)
	{
		int min = 0;

		while (min < 60)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			min++;
			_putchar('\n');
		}
	}
}
