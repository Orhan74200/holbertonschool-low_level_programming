#include "main.h"

/**
 * _isalpha - Verifie si un caractere est une lettre
 * @c: le caractere a verifier
 *
 * Cette fonction verifie si le caractere donne est une lettre
 * (a-z ou A-Z) .
 *
 * Return: 1 si c est une lettre, 0 sinon
 */

int _isalpha(int c)
{
if (c >= 65 && c <= 90 || C >= 97 && C <= 122)
{
return (1);
}
else
{
return (0);
}
}
