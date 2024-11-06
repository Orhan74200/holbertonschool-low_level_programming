#include "main.h"

/**
 * print_square - Prints a square using the character #
 * @size: The size of the square
 *
 * Description: This function prints a square of given size using '#' characters,
 * followed by a new line. If size is 0 or less, it only prints a newline.
 */
void print_square(int size)
{
int row, col;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
