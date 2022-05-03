#include "main.h"

/**
 * main - print "_putchar"
 * Return: Sucess
 */

void print_alphabet_x10(void)
{
int alph;
int a;
for (a = 1; a <= 10; a ++)
{
for (alph = 'a'; alph <= 'z';alph++)
{
_putchar (alph);
}
_putchar ('\n');
}
}
