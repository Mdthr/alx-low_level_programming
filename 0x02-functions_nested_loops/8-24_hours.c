#include "main.h"

/**
 *  jack_bauer -  prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int hour;
	int sec;

	for (hour = 0; hour <= 23; hour++)
	{
		for (sec = 0; sec <= 59; sec++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((sec / 10) + '0');
			_putchar((sec % 10) + '0');
			_putchar('\n');
		}
	}
}

