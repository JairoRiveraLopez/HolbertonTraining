#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - prints all n numbers from n to 98, followed by a new line
 * @n: variable
 * Return: sucess
 */
void print_to_98(int n)
{
while (n != 98)
{
printf("%i, ", n);
if (n > 98)
{
n--;
}
else
{
n++;
}
}
printf("%d\n", 98);
}
