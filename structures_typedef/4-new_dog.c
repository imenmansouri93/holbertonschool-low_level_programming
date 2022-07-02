#ifndef NEW_DOG_C
#define NEW_DOG_C
#include "dog.h"
#include<string.h>
#include <stdlib.h>
char *_strdup(char *str);
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
char *name1;
char *owner1;
my_dog = malloc (sizeof(dog_t));
if (my_dog == NULL)
return (NULL);
name1 = _strdup(name);
if (name1 == NULL)
{
free(my_dog);
return (NULL);
}
owner1 = _strdup(owner);
if (owner1 == NULL)
{
free(name1);
free(my_dog);
return(NULL);
}
my_dog->name = name1;
my_dog->owner = owner1;
my_dog->age = age;
return (my_dog);
}
/**
 * 
 * 
 * 
 */
char *_strdup(char *str)
{
char *des;
int i = 0, j = 0;
int len = 0;
if (str ==  NULL)
return (NULL);
j = 0;
while (*(str + i) != '\0')
{
len++;
j++;
}
des = malloc ((len + 1) * sizeof(char));
if (des == NULL)
return (NULL);
while (i < len)
{
*(des + i) = *(str + i);
i++;
}
*(des + len) = '\0';
return(des);
}
#endif