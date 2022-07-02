#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <string.h>
/**
 * struct dog - Define a new type
 * @name: char
 * @age: float
 * @owner: char
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * typedef - type for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
