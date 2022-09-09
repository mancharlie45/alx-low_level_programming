#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints the alphabet in lower case, followed by a bew line
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
int l = 'a';
while (l <= 'z')
{
putchar(l);
l += 1;
}
putchar('\n');
return (0);
}
