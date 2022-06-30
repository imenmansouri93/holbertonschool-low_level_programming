#ifndef PRINT_DOG_H
#define PRINT_DOG_C
#include <stdio.h>
#include <string.h>
#include "dog.h"
void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        if (d->name == NULL || d->owner == NULL)
        {
            printf("Name: (nil)");
        }
        else

            printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
    }
}
#endif