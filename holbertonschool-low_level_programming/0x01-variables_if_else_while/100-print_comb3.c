#include <stdio.h>

/**
 * main - generate numbers of 2 digits from 0 to 99 with , and in order
 * Return: Sucess
 */

int main(void)
{

int a = '0';
int b = '0';

while (a <= '9')
{
while (b <= '9')
{
if (!(a > b || a == b))
{
putchar (a);
putchar (b);
if (a == '8' && b == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
b++;
}
if (b >= '9')
{
b = '0';
}
a++;
}
return (0);
}
