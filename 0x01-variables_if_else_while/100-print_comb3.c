#include <stdio.h>

/**
 * main - program that prints the numbers from 01 to 89
 * Numbers must be separated by , followed by a space
 * Numbers should be printed in ascending order with 2 digits
 * You can only usethe putchar function
 * Return: 0
 */

int main(void)
{
int d;
for (d = 0; d < 90; d++)
{
putchar((d / 10) + '0');
putchar((d % 10) + '0');
if (d != 89)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
