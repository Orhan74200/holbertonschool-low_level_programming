#include "main.h"

/**
 * print_triangle - Prints a triangle using the character #
 * @size: The size of the triangle
 *
 * Description: This function prints a triangle of given size using '#' characters,
 * followed by a new line. If size is 0 or less, it only prints a newline.
 */
void print_triangle(int size)
{
int row, space, hash;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
for (space = size - row; space > 0; space--)
{
_putchar(' ');
}
for (hash = 1; hash <= row; hash++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
