#ifndef NEW_DOG_C
#define NEW_DOG_C
#include<stdlib.h>
#include "dog.h"
/**
 * free_dog - free memory
 * @d: ...
 * Return: NNothing
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d->name);
free(d);
}
}
#endif
