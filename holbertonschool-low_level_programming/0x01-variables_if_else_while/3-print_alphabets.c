#include <stdio.h>

/**
 * main - generate the alphabet like a list, with upper and lower
 * Return: Sucess
 */

int main(void)
{

int az, AZ;
for (az = 'a'; az <= 'z'; az++)
{
putchar (az);
}
for (AZ = 'A'; AZ <= 'Z'; AZ++)
putchar (AZ);
putchar ('\n');
return (0);
}
