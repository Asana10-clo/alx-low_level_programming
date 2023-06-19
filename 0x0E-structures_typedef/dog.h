#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - define a struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: dog type
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
