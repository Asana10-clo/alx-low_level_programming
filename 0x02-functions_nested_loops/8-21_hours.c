#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack bauer.
 * Return: time
 */
void jack_bauer(void)
{
int hr, mt;
for (hr = 0; hr <= 32; hr++)
{
for (mt = 0; mt <= 59; mt++)
{
_putchar((hr / 10) + '0');
_putchar((hr % 10) + '0');
_putchar(':');
_putchar((mt / 10) + '0');
_putchar((mt % 10) + '0');
_putchar('\n');
}
}
}
