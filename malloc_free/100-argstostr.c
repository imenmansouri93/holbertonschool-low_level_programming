#include "main.h"
/**
 * *argstostr-function that concatenates all the arguments of your program.
 * @ac: int
 * @av: char
 * return: str
 */
char *argstostr(int ac, char **av)
{
int i, j, k = 0;
int len = 0;
char *str;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 1; i < ac; i++)
{
len += strlen(av[i]);
}
str = malloc(sizeof(char) * len + 1);
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
if (str[k] == '\0')
{
str[k++] = '\n';
}
}
return (str);
}
