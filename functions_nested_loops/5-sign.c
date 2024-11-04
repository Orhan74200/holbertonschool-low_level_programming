#include "main.h"

/**
 * print_sign - Affiche le signe d'un nombre entier
 * @n: Le nombre a verifier
 *
 * Cette fonction verifie si le nombre est positif, negatif ou zero.
 * Elle affiche un signe correspondant :
 * '+' pour les nombres positifs,
 * '0' pour zero,
 * '-' pour les nombres negatifs.
 *
 * Return: 1 si n est positif, 0 si n est zero, -1 si n est negatif.
 */

int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("-");
return (-1);
}
}
