#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character '_' should be printed
 *
 * Description: This function prints a line of '_' characters,
 * followed by a newline. If n is 0 or less, it only prints a newline.
 */
void print_line(int n)

{

int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}