#include "main.h"

/**
 * _strlen - returns length of a string.
 *
 * @s: string input
 * Return: length
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
