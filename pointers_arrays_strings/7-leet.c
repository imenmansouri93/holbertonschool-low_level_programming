#include "main.h"
/**
 * *leet-function that encodes a string into 1337.
 * @str: string
 * Return: str
 */
char *leet(char *str)
{
int i = 0;
int j;
char leet[8] = {'o', 'l', '&', 'e', 'a', '!', '/', 't'};
while (str[i])
{
for (j = 0; j < 8; j++)
{
if ((str[i]) == leet[j] || str[i] + 32 == leet[j])
str[i] = j  + '0';
}
i++;
}
return (str);
}
