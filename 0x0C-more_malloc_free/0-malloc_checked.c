#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: input parameter
 * Return:success
 */
void *malloc_checked(unsigned int b)
{
void *q = malloc(b);
if (q == NULL)
{
exit(98);
}
return (q);
}
