#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14 ten times
 *
 * Description: This function prints the numbers from 0 to 14,
 * followed by a new line. It repeats this process ten times.
 */
void more_numbers(void)
{
int c;
int count;

for (count = 0; count <= 10; count++)
{
for (c = '0'; c <= '14'; c++)
{
_putchar(c);
}
_putchar(count);
}
_putchar('\n');
}
