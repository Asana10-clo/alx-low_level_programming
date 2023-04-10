#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: input value
 * Return: value
 */
int print_last_digit(int n)
{
int p;
p = n % 10;
if (p < 0)
p *= -1;
_putchar(p + '0');
return (p);
}
