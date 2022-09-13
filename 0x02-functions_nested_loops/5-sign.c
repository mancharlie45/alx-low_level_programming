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
putchar('43');
return (1);
}
else if (n < 0)
{
putchar('45');
return (-1);
}
else
{
putchar('48');
return (0);
}
}
