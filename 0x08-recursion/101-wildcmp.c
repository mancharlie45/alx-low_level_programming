#include "main.h"

int check_wildcmp(char *s);

/**
 * wildcmp - Returns if a string is wildcmp
 * @s: the string value to be checked
 *
 * Return: integer value
 */
int wildcmp(char *s)
{
if (*s == '0')
return (1);

return (check_wildcmp(s));
}

/**
 * check_wildcmp - check if a string is wildcmp
 * @s: the string value to be checked
 * Return: integer value
 */
int check_wildcmp(char *s)
{
int l = _strlen_recursion(s) - 1;


if (*s == s[l])
{
s++;
l--;
}
else
{
return (0);
}

return (1);
}

/**
 * _strlen_recursion - Get the length of a string
 * @s: the string to get the length
 *
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}

s++;
return (_strlen_recursion(s) + 1);
}
