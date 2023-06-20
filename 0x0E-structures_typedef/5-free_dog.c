#include "dog.h"

/**
 * free_dog - function to free dog type
 * @d: dog type
 * Return: freed dog type
 */
void free_dog(dog_t *d)
{
if (d)
free((*d).owner);
free((*d).name);
free(d)
}
