#include <stdio.h>

/**
 * main - generate numbers of 2 digits from 0 to 99 with , and in order
 * Return: Sucess
 */

int main(void)
{

int a = '0';
int b = '0';
int c = '0';

while (a <= '7')
{
while (b <= '8')
{
while (c <= '9')
{
if (a < b && b < c)
{
putchar (a);
putchar (b);
putchar (c);
if (a == '7' && b == '8' && c == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
c++;
}
c = '0';
b++;
}
b = '0';
a++;
}
return (0);
}
