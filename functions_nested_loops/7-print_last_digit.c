#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to check
 *
 * This function computes the last digit of the given number,
 * prints it, and returns its value.
 *
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
int last_digit = n % 10;

if (last_digit < 0)
{
last_digit = -last_digit;
}

char buffer[2];

buffer[0] = last_digit + '0';
buffer[1] = '\0';

write(1, buffer, 1);
return (last_digit);
}
