#include "main.h"

/**
 * _islower - check if c is lowercase
 * @c: is the variable
 * Return: 1 if lowercase, 0 if not.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
