#include "function_pointers.h"

/**
 * @name: string
 * @f: pointer
 * Return: string
 */
void print_name(char *name, void (*f)(char *))
{
if (name !=  NULL && f != NULL)
f(name);

}
