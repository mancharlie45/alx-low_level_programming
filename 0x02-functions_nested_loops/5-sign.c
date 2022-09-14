#include "stdio.h"

/**
 * print_sign - function that prints that prints the sign of a number. .
 * @n: The input number to check
 * Return: int.
 */

int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
