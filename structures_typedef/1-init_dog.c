#ifndef INIT_DOG_H
#define INIT_DOG_H
#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog -  function that initialize a variable of type
 * @d: dog  structer
 * @name: the name of the dog
 * @owner: the owner of the dog
 * @age: tha age of th dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}

}
#endif
