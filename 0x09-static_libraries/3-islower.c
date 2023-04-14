#include <stdio.h>

/**
 * _islower - checks if lowercase
 * @c: input string
 * Return: 0 success
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
