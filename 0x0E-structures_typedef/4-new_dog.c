#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog type
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: new dog type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i, j, k;
dog_t *dog;
i = j = 0;
while (name[i])
;
while (owner[j])
;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
(*dog).name = malloc(i *sizeof((*dog).name));
if (dog == NULL)
return (NULL);
for (k = 0; k < i; k++)
(*dog).name[k] = name[k];
(*dog).age = age;
(*dog).name = malloc(j * sizeof((*dog).owner));
if (dog == NULL)
return (NULL);
for (k = 0; k < j; k++)
(*dog).owner[k] = owner[k];
return (dog);
}
