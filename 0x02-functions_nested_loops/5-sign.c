#include "stdio.h"
/**
 * print_sign - function that prints
 * @n: The input numberto check
 * Return: int.
 */

int print_sign(int n)
{
if (n > 0)
{
putchar(43);
return (1);
}
else if (n < 0)
{
putchar(45);
return (0);
}
}
