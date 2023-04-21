#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - functions that prints numbers
 * @separator: string tobe printed between numbers
 * @n: params
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list as;
unsigned int i;
va_start(as, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(as, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(as);
}
