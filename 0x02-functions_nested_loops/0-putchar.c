#include "stdio.h"

/**
 * main - program that prints _putchar.
 *
 * Return: init
 */

int main(void)
{
int n = 0;
char str_put[7] = "putchar";

while (n < 7)
{
_putchar(str_put[n]);
n += 1;
}
_putchar('\n');
return (0);
}
