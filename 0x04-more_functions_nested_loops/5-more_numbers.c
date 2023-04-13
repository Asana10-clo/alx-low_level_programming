#include "main.h"

/**
 * more_numbers - 0-14, 10 times
 * Return: always success
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
putchar((j / 10) + '0');
putchar((j % 10) + '0');
}
putchar('\n');
}
}
