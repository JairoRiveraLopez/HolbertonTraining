#include "main.h"

/**
 * _isupper - check if c is lowercase
 * @c: is the variable
 * Return: 1 if lowercase, 0 if not.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
