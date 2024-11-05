#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Description: Numbers are separated by a comma and space.
 * The function prints in ascending or descending order to reach 98.
 * The last number printed is always 98.
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n < 98; n++)
{
printf("%d, ", n);
}
}
else
{
for (; n > 98; n--)
{
printf("%d, ", n);
}
}
printf("98\n");
}
