#ifndef NEW_DOG_C
#define NEW_DOG_C
#include<stdlib.h>
#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char*src);
/**
 * new_dog - function that creates a new dog
 * @name: variable pointing to name of dog
 * @age: age of dog
 * @owner: variable pointing to dog owner
 * Return: variable pointing to dog-t struct 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;
int name1 = 0, owner1 = 0;

if (name != NULL && owner != NULL)
{
name1 = _strlen(name) +1;
owner1 = _strlen(owner) + 1;
my_dog = malloc (sizeof(dog_t));
if (my_dog == NULL)
return (NULL);
my_dog->name = malloc(sizeof(char) * name1);
if (my_dog->name == NULL)
{
free(my_dog);
return (NULL);
}
my_dog->owner = malloc(sizeof(char) * owner1);
if (my_dog->owner ==  NULL)
{
free(my_dog->name);
free(my_dog);
return(NULL);
}
my_dog->name = _strcpy(my_dog->name, name);
my_dog->owner = _strcpy(my_dog->owner,owner);
my_dog->age = age;
}
return(my_dog);
}
/**
 * 
 * 
 * 
 */
int _strlen(char *s)
{
int i = 0;
int l = 0;
while (s[i] != '\0')
{
l++;
i++;
}
return(l);
}
char *_strcpy(char *dest, char*src)
{
int i;
for ( i = 0; src[i] != '\0' ; i++)
{
  dest[i] = src[i];
}
dest[i++] = '\0';
return(dest);
}
#endif