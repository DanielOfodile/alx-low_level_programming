#include "main.h"

/**
 * jack_bauer - prints everyminute of the day of Jack Bauer.
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int hour = 0;

	while (hour < 24)
	{
		int minute = 0;

		while (minute < 60)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour + '0');
				_putchar(':');
				if (minute < 10)
				{
					_putchar('0');
					_putchar(minute + '0');
				}
				else
				{
					_putchar((minute / 10) + '0');
					_putchar((minute % 10) + '0');
				}
			}
			else
			{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
				_putchar(':');
				if (minute < 10)
				{
					_putchar('0');
					_putchar(minute + '0');
				}
				else
				{
					_putchar((minute / 10) + '0');
					_putchar(minute % 10 + '0');
				}
			}
			_putchar('\n');
			minute++;
		}
		hour++;
	}
}
