#include "main.h"
#include <unistd.h>

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59.
 *
 * Description: This function iterates through each hour and each minute
 * of a 24-hour day, printing the time in the format HH:MM. The output
 * starts from 00:00 and goes up to 23:59.
 *
 * Return: This function does not return a value.
 */
void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour < 10; hour++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
}
}
}
