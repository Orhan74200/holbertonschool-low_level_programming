#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints the numbers from 0 to 9, excluding 2 and 4
 *
 * Description: This function prints the digits from 0 to 9,
 * but skips the digits 2 and 4, followed by a new line.
 */
void print_most_numbers(void)
{
for (c = '0'; c <= '9'; c++)
{
if (c != '2' && c != '4')
{
printf("%c", c)
}
}
}
