#include "main.h"
/**
 * cap_string - capitalizes most of the words in a string.
 * @s:  string.
 * Return: String with all words capitalized.
 */
char *cap_string(char *s)
{
int x;
int y;
int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

x = 0;
while (*(s + x) != '\0')
{
if (*(s + x) >= 'a' && *(s + x) <= 'z')
{
if (x == 0)
{
*(s + x) = *(s + x)-32;
}
else
{
for (y = 0; y <= 12; y++)
{
if (a[y] == *(s + x - 1))
{
*(s + x) = *(s + x)-32;
}
}
}
}
x++;
}
return (s);
}
