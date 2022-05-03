#include <stdio.h>

/**
 * main - generate number of base 10 from 0 to 9 with ,
 * Return: Sucess
 */

int main(void)
{

int num;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
if (num == '9')
continue;
putchar (',');
putchar (' ');
}
putchar ('\n');
return (0);
}
