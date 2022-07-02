#include <stdio.h>
#include "3-calc.h"
int main(int argc, char *argv[])
{
int (*p_verif)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
p_verif = get_op_func(argv[2]);
if (p_verif == NULL)
{
printf("Error\n");
exit(99);
}

printf ("%d\n", p_verif(atoi(argv[1]), atoi(argv[3])));
return(0);
}