#include <stdlib.h>
#include <stdi0.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
int i;
for (i = 0; i < 100; i++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
}
putchar('\n');
return (0);
}
