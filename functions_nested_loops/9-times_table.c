#include <unistd.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Description: This function prints the multiplication table for 9,
 * formatted with proper spacing and alignment.
 */
void times_table(void)
{
int i, j, result;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;
if (j != 0)
_putchar(' ');
if (result < 10)
_putchar(' ');

write("%d", result);

if (j < 9)
write(",");
}
_putchar('\n');
}
}
