#include "main.h"

/**
 * times_table - prints 9 times table
 * Return: multiples
 */
void times_table(void)
{
int i;
int n;
int p;
for (i = 0; i <= 9; i++)
{
_putchar('0');
for (n = 1; n <= 9; n++)
{
_putchar(',');
_putchar(' ');
p = i * n;
if (p <= 9)
_putchar(' ');
else
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
_putchar('\n');
}
}
