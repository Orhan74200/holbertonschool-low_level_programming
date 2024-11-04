#include "main.h"

/** print_alphabet_x10 - entree fonction
 *
 *
 * @i fonction
 */

void print_alphabet_x10(void)
{
char i;
int count;

for (count = 0; count < 10; count++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
