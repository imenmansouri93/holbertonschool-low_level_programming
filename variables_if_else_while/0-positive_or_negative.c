#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
    {
        printf("%d is positif\n", n);
    }
    else if (a == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {

        printf("%d in negative\n", n);
    }

    return (0);
}