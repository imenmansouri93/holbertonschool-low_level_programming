#include "main.h"
#include <string.h>
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: lowercase
 * Return:  uppercase
 */

char *string_toupper(char *s)
{
char *lower = s;
int i;
for (i = 0; lower[i] != '\0'; i++)
{
if (lower[i] >= 'a' && lower[i] <= 'z')
{
lower[i] -= 32;
}
}
return (lower);
}
