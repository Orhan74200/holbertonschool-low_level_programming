#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{

char letter;
int i;

for (i = 0; i < 2; i++)
{
for (letter = (i == 0) ? 'a' : 'A'; letter <= (i == 0) ? 'z' : 'Z'; letter++)
{
putchar(letter);
}
}
putchar('\n');

return (0);
}
