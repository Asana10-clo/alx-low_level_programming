#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - anything
 * @char: character
 * @format: any string type
 * Return: anything success
 */
void print_all(const char * const format, ...)
{
va_list things;
int i = 0;
char *str;
char  *par = " ";
va_start(things, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%c%s", va_arg(things, int), par);
break;
case 'i':
printf("%d%s", va_arg(things, int), par);
break;
case 'f':
printf("%f%s", va_arg(things, double), par);
break;
case 's':
str = va_arg(things, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", str, par);
break;
default:
i++;
continue;
}
par = ", ";
i++;
}
}
printf("\n");
va_end(things);
}
