#include "main.h"

/**
 * _pow_recursion - power of a number
 *@x: input
 *@y: input y
 *Return: power of x to y
 */

int _pow_recursion(int x, int y)
{
if (y != 0)
return (x * _pow_recursion(x, y - 1));
else
return (1);
}
