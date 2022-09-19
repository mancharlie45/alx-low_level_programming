#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
int c = 0;

for (; *s I= '\0'; s++)
{
c++;
}
return (c);
}
