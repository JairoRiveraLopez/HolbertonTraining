#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: void
 */

void times_table(void)
{
int v1, v2, v3, v4, v5;

for (v1 = 0; v1 < 10; v1++)
{
for (v2 = 0; v2 < 10; v2++)
{
v3 = v1 * v2;
v4 = v3 / 10;
v5 = v3 % 10;
if (v2 == '0')
_putchar('0');
else if (v3 < 10)
{
if (v2 != 0)
_putchar (' ');
_putchar ('0' + v5);
}
else
{
_putchar('0' + v4);
_putchar('0' + v5);
}
if (v2 < 9)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
}
