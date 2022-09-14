#include "stdio.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: nothing.
 */

void times_table(void)
{
int row, col;
int mult = 0;

for (row = 0; row < 10; row++)
{
for (col = 0; col < 10; col++)
mult = (row * col);
if (mult < 10)
{
if (col != 0)
{
putchar(' ');
putchar(' ');
}
putchar(mult + 0);
}
else
{
putchar(' ');
putchar((mult / 10) + '0');
putchar((mult % 10) + '0');
}
if (col !=9)
putchar(',');
}
putchar('\n');
}
}
