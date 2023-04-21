#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns sum of all parameters
 * @n: parameters passed
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i,  sum = 0;
va_list as;
va_start(as, n);
for (i = 0; i < n; i++)
{
if (n == 0)
{
return (0);
}
else
{
sum = sum + va_arg(as, int);
}
}
va_end(as);
return (sum);
}
