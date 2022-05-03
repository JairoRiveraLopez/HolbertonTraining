#include "main.h"

/**
 * print_sign - detect if n is -, + or 0, printing the sing
 * @n: variable
 * Return: 1 if lowercase, 0 if not.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
