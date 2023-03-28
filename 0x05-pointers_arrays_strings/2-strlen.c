#include "main.h"
/**
 * _strien - return the length of a string
 * @s: string
 * Return: length
 */
int _strien(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}

return (longi);
}
