#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to initialize struct dog
 * @d: struct name
 * @name: dog name
 * @age: dog age
 * @owner: variable owner
 * Return: struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
