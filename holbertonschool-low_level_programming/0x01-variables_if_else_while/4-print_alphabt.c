#include <stdio.h>

/**
 * main - generate the alphabet like a list, in lower except e and q
 * Return: Sucess
 */

int main(void)
{

int az, e, q;

e = 'e';
q = 'q';

for (az = 'a'; az <= 'z'; az++)
{
if (az != e && az != q)
putchar(az);
}
putchar('\n');

return (0);
}
