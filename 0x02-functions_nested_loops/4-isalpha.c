#include <stdio.h>

/**
 * _isalpha -  checks if alphabet or not
 * @c: input string
 * Return: 0
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
