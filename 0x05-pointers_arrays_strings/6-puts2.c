#include "main.h"

/**
 * puts2 - prints every other character beginning with first character.
 * @str: string input
 * Return: character
 */
void puts2(char *str)
{
int len = 0;
int i = 0;
char *a = str;
int p;

while (*a != '\0')
{
a++;
len++;
}
i = len - 1;
for (p = 0; p <= i; p++)
{
if (p % 2 == 0)
{
putchar(str[p]);
}
}
putchar('\n');
}
