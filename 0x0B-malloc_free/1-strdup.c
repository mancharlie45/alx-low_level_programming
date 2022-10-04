#include <stdlib.h>
#include "main.h"

/**
 *  *_strdup - copies the string given as parameter
 *  @str: string to duplicate
 *
 *  Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)

dup = malloc(sizeof(char) * (i + 1));

if (dup == NULL)
return (NULL);

for (len = 0; len <= i; len++
dup[len] = str[len];

return (dup);
}
