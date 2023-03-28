#include "main.h"

/**
 *print_rev - function to print string in reverse with a new line.
 *@s: input string
 *Return: string
 */
void print_rev(char *s)
{
int len = 0;
int p;
while (*s != '\0')
{
len++;
s++;
}
s--;
for (p = len; p > 0; p--)
{
putchar(*s);
s--;
}
putchar('\n');
}
