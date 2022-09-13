#include "stdio.h"

/**
 * main - program that prints _putchar.
 *
 * Return: init
 */

int main(void)
{
int n = 0;
char str_put[8] = "_putchar";

while (n < 8)
{
putchar(str_put[n]);
n += 1;
}
putchar('\n');
return (0);
}
