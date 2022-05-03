#include <stdio.h>

/**
 * main - generate number of base 10 from 0
 * Return: Sucess
 */

int main(void)
{

int num, abc;

for (num = '0'; num <= '9'; num++)
putchar(num);

for (abc = 'a'; abc <= 'f'; abc++)
putchar(abc);
putchar('\n');

return (0);
}
